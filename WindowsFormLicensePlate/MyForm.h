#pragma once
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

#include<iostream>
#include<windows.h>
#include<conio.h> 
#include "stdio.h"

#include <msclr\marshal_cppstd.h>

#include "Main2.h"
#include "MyFormDataBase.h"
#include <vector>
#include <string>


namespace WindowsFormLicensePlate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/*
	std::string number[]{
			"TSA45TT",
			"E011",
			"WA01" };
*/
	std::vector <std::string> number_plate;
	int camera = 0;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button
			// 
			this->button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button->Location = System::Drawing::Point(47, 412);
			this->button->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(146, 86);
			this->button->TabIndex = 0;
			this->button->Text = L"START";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(47, 48);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(376, 311);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(476, 48);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(376, 311);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(476, 427);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(164, 54);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(474, 393);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Location = System::Drawing::Point(266, 412);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 86);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Connect to DB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &MyForm::backgroundWorker1_ProgressChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Web camera", L"USB Web camera" });
			this->comboBox1->Location = System::Drawing::Point(44, 16);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 540);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	

#pragma endregion
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		

		if (!backgroundWorker1->IsBusy)
		{
			backgroundWorker1->WorkerReportsProgress = true;
			backgroundWorker1->WorkerSupportsCancellation = true;
			backgroundWorker1->RunWorkerAsync(1);
			button->Text = "STOP";
			button->Refresh();
			
		}else{
			backgroundWorker1->CancelAsync();
			button->Text = "START";
			button->Refresh();
		       delete pictureBox1->Image;
				delete pictureBox2->Image;
				pictureBox1->InitialImage = nullptr;
				pictureBox1->Refresh();
				pictureBox2->InitialImage = nullptr;
				pictureBox2->Refresh();
		}
	
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MyFormDataBase^ form = gcnew MyFormDataBase;
		form->Show();
	}
	
			 

	private: System::Void backgroundWorker1_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e)
	{
		label2->Text = (String^)e->UserState;
		label2->Refresh();
	}
	

	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

		cv::VideoCapture capWebcam(camera);            // declare a VideoCapture object and associate to webcam, 0 => use 1st webcam

		if (capWebcam.isOpened() == false) {  
			e->Cancel = true;
			backgroundWorker1->ReportProgress(0);
			MessageBox::Show("No camera detected!");
			return;
			
			// check if VideoCapture object was associated to webcam successfully
			//std::cout << "error: capWebcam not accessed successfully\n\n";      // if not, print error message to std out
			//_getch();                                                           // may have to modify this line if not using Windows
			//Close();                                                       // and exit program
		}


		cv::Mat imgGrayscale;       // grayscale of input image
		cv::Mat imgBlurred;         // intermediate blured image
		cv::Mat imgCanny;           // Canny edge image

		bool blnKNNTrainingSuccessful = loadKNNDataAndTrainKNN();           // KNN training

		if (blnKNNTrainingSuccessful == false) {
			//std::cout << std::endl << std::endl << "ERROR: KNN traning was not successful" << std::endl << std::endl;
			//Close();
		}



		while (capWebcam.isOpened()) {

			

			if (backgroundWorker1->CancellationPending)
			{
				// Set Cancel property of DoWorkEventArgs object to true
				e->Cancel = true;
				// Reset progress percentage to ZERO and return
				backgroundWorker1->ReportProgress(0);
				return;
			}

	
			
			cv::Mat imgOriginalScene;        
			cv::Mat img;
			
			bool blnFrameReadSuccessfully = capWebcam.read(imgOriginalScene);            // get next frame

			if (!blnFrameReadSuccessfully || imgOriginalScene.empty()) {                 // if frame not read successfully
				//std::cout << "error: frame not read from webcam\n";                 // print error message to std out
				break;                                                              // and jump out of while loop
			}
			img = imgOriginalScene;
			System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
			System::IntPtr ptr(img.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(img.cols, img.rows, img.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
			graphics->DrawImage(b, rect);
			delete graphics;

			std::vector<PossiblePlate> vectorOfPossiblePlates = detectPlatesInScene(imgOriginalScene); // znalezc tablice na obrazku
			vectorOfPossiblePlates = detectCharsInPlates(vectorOfPossiblePlates);                      // znalezc litery na tablice

			if (vectorOfPossiblePlates.empty()) {
				backgroundWorker1->ReportProgress(1,"Nie odnaleziono tablic na zdjeciu");
				
				//label2->Text = "Nie odnaleziono tablic na zdjeciu";
			
				
				// jesli tablice nie udalo sie znalezc na obrazku
				//std::cout << std::endl << "Nie odnaleziono tablic na zdjeciu" << std::endl;
			}else{
				std::sort(vectorOfPossiblePlates.begin(), vectorOfPossiblePlates.end(), PossiblePlate::sortDescendingByNumberOfChars);
				PossiblePlate licPlate = vectorOfPossiblePlates.front();

				//cv::imshow("imgPlate", licPlate.imgPlate);
				//cv::imshow("imgThresh", licPlate.imgThresh);


				if (licPlate.strChars.length() == 0) {
					//label2->Text = "Nie odnaleziono znakow na tablice";
					//label2->Refresh();
					backgroundWorker1->ReportProgress(1, "Nie odnaleziono znakow na tablice");
				}
				else {
					/*
					System::Drawing::Graphics^ graphics3 = pictureBox3->CreateGraphics();
					System::IntPtr ptr3(licPlate.imgPlate.ptr());
					System::Drawing::Bitmap^ b3 = gcnew System::Drawing::Bitmap(300, 100, 1, System::Drawing::Imaging::PixelFormat::Format24bppRgb,ptr3);
					System::Drawing::RectangleF rect3(0, 0, pictureBox3->Width, pictureBox3->Height);
					graphics3->DrawImage(b3, rect3);
					delete graphics3;
					*/

					drawRedRectangleAroundPlate(imgOriginalScene, licPlate); // zaznaczenie tablic na zdjeciu czerwonym prostokatem

					//System::String^ number = licPlate.strChars;
					String^ num = gcnew String(licPlate.strChars.c_str());
					backgroundWorker1->ReportProgress(1, num);

					

					for (int i = 0; i < number_plate.size(); i++) {
						if (msclr::interop::marshal_as<std::string>(num) == number_plate[i]) {


							MessageBox::Show(num+" : Open door!");
							e->Cancel = true;
							//backgroundWorker1->ReportProgress(0,num+" : Open door");
							return;
						}
					}



					//std::cout << std::endl << "Tablica na zdjeciu: " << licPlate.strChars << std::endl;
					//std::cout << std::endl << "-----------------------------------------" << std::endl;

					writeLicensePlateCharsOnImage(imgOriginalScene, licPlate);  // napis odczytanej tablicy na zdjeciu

					//cv::imshow("imgOriginalScene", imgOriginalScene);

					System::Drawing::Graphics^ graphics2 = pictureBox2->CreateGraphics();
					System::IntPtr ptr2(imgOriginalScene.ptr());
					System::Drawing::Bitmap^ b2 = gcnew System::Drawing::Bitmap(imgOriginalScene.cols, imgOriginalScene.rows, imgOriginalScene.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr2);
					System::Drawing::RectangleF rect2(0, 0, pictureBox2->Width, pictureBox2->Height);
					graphics2->DrawImage(b2, rect2);


				}

			}


		}

	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	int selectedIndex = comboBox1->SelectedIndex;
	if (selectedIndex > 0) {
		camera = 1;
		//MessageBox::Show(selectedIndex + " >1");
	}
	else {
		camera = 0;
		//MessageBox::Show(selectedIndex + " 0");
	}

}
};
}


	void drawRedRectangleAroundPlate(cv::Mat &imgOriginalScene, PossiblePlate &licPlate) {
		cv::Point2f p2fRectPoints[4];

		licPlate.rrLocationOfPlateInScene.points(p2fRectPoints);

		for (int i = 0; i < 4; i++) {
			cv::line(imgOriginalScene, p2fRectPoints[i], p2fRectPoints[(i + 1) % 4], SCALAR_RED, 2);
		}
	}

	void writeLicensePlateCharsOnImage(cv::Mat &imgOriginalScene, PossiblePlate &licPlate) {
		cv::Point ptCenterOfTextArea;                   // this will be the center of the area the text will be written to
		cv::Point ptLowerLeftTextOrigin;                // this will be the bottom left of the area that the text will be written to

		// ustawienia czcionki
		int intFontFace = CV_FONT_HERSHEY_SIMPLEX;
		double dblFontScale = (double)licPlate.imgPlate.rows / 30.0;
		int intFontThickness = (int)std::round(dblFontScale * 1.5);
		int intBaseline = 0;

		cv::Size textSize = cv::getTextSize(licPlate.strChars, intFontFace, dblFontScale, intFontThickness, &intBaseline);

		//ustawienie miejsca wyswietlania odczytanych tablic na zdjeciu
		ptCenterOfTextArea.x = (int)licPlate.rrLocationOfPlateInScene.center.x;

		if (licPlate.rrLocationOfPlateInScene.center.y < (imgOriginalScene.rows * 0.75)) {
			ptCenterOfTextArea.y = (int)std::round(licPlate.rrLocationOfPlateInScene.center.y) + (int)std::round((double)licPlate.imgPlate.rows * 1.6);
		}
		else {
			ptCenterOfTextArea.y = (int)std::round(licPlate.rrLocationOfPlateInScene.center.y) - (int)std::round((double)licPlate.imgPlate.rows * 1.6);
		}

		ptLowerLeftTextOrigin.x = (int)(ptCenterOfTextArea.x - (textSize.width / 2));
		ptLowerLeftTextOrigin.y = (int)(ptCenterOfTextArea.y + (textSize.height / 2));

		// napisz tablice na zdjeciu
		cv::putText(imgOriginalScene, licPlate.strChars, ptLowerLeftTextOrigin, intFontFace, dblFontScale, SCALAR_YELLOW, intFontThickness);
	}

