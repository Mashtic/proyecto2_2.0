#include "Form1.h"
namespace CppCLRWinFormsProject {
	//CppCLRWinFormsProject
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PantallaInicial
	/// </summary>
	public ref class PantallaInicial : public System::Windows::Forms::Form
	{
	public:
		PantallaInicial(void)
		{
			InitializeComponent();
			InitImages();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PantallaInicial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_NewGame;
	protected:

	private: System::Windows::Forms::Button^ btn_LoadGame;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		void InitImages() {
			this->BackgroundImage = Image::FromFile("img//amanecer.jpg");
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_NewGame = (gcnew System::Windows::Forms::Button());
			this->btn_LoadGame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(438, 325);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Tr33 Farm";
			// 
			// btn_NewGame
			// 
			this->btn_NewGame->Location = System::Drawing::Point(120, 477);
			this->btn_NewGame->Name = L"btn_NewGame";
			this->btn_NewGame->Size = System::Drawing::Size(111, 55);
			this->btn_NewGame->TabIndex = 1;
			this->btn_NewGame->Text = L"New Game";
			this->btn_NewGame->UseVisualStyleBackColor = true;
			this->btn_NewGame->Click += gcnew System::EventHandler(this, &PantallaInicial::btn_NewGame_Click);
			// 
			// btn_LoadGame
			// 
			this->btn_LoadGame->Location = System::Drawing::Point(771, 477);
			this->btn_LoadGame->Name = L"btn_LoadGame";
			this->btn_LoadGame->Size = System::Drawing::Size(111, 55);
			this->btn_LoadGame->TabIndex = 2;
			this->btn_LoadGame->Text = L"Load Game";
			this->btn_LoadGame->UseVisualStyleBackColor = true;
			// 
			// PantallaInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1029, 590);
			this->Controls->Add(this->btn_LoadGame);
			this->Controls->Add(this->btn_NewGame);
			this->Controls->Add(this->label1);
			this->Name = L"PantallaInicial";
			this->Text = L"PantallaInicial";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_NewGame_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1^ form = gcnew Form1;
		form->ShowDialog();
	}
	};
}
