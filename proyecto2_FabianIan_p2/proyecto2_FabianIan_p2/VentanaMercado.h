#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaMercado
	/// </summary>
	public ref class VentanaMercado : public System::Windows::Forms::Form
	{
	public:
		VentanaMercado(void)
		{
			InitializeComponent();
			initImages();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaMercado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_ComprarAB;
	private: System::Windows::Forms::Button^ btn_ComprarAVL;
	private: System::Windows::Forms::Button^ btn_ComprarHEAP;
	private: System::Windows::Forms::Button^ btn_ComprarSPLAY;
	private: System::Windows::Forms::Button^ btn_VenderFrutoSPLAY;

	protected:

	protected:




	private: System::Windows::Forms::Button^ btn_VenderFrutoHEAP;

	private: System::Windows::Forms::Button^ btn_VenderFrutoAVL;

	private: System::Windows::Forms::Button^ btn_VenderFrutoAB;

	private: System::Windows::Forms::Button^ btn_ComprarEspanta;
	private: System::Windows::Forms::Button^ btn_VenderTodoFrutoSPLAY;

	private: System::Windows::Forms::Button^ btn_VenderTodoFrutoHEAP;

	private: System::Windows::Forms::Button^ btn_VenderTodoFrutoAVL;

	private: System::Windows::Forms::Button^ btn_VenderTodoFrutoAB;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		void initImages() {
			this->BackgroundImage = Image::FromFile("img//mercado.jpg");
			this->pictureBox1->BackgroundImage = Image::FromFile("img//arbolManzana.png");
			this->pictureBox2->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
			this->pictureBox3->BackgroundImage = Image::FromFile("img//arbolChiva.png");
			this->pictureBox4->BackgroundImage = Image::FromFile("img//arbolLimones.png");
			this->pictureBox5->BackgroundImage = Image::FromFile("img//espanta.png");
			this->pictureBox6->BackgroundImage = Image::FromFile("img//manzana.png");
			this->pictureBox7->BackgroundImage = Image::FromFile("img//mango.png");
			this->pictureBox8->BackgroundImage = Image::FromFile("img//chiva.png");
			this->pictureBox9->BackgroundImage = Image::FromFile("img//limon.png");

			
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_ComprarAB = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarAVL = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarSPLAY = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutoSPLAY = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutoHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutoAVL = (gcnew System::Windows::Forms::Button());
			this->btn_VenderFrutoAB = (gcnew System::Windows::Forms::Button());
			this->btn_ComprarEspanta = (gcnew System::Windows::Forms::Button());
			this->btn_VenderTodoFrutoSPLAY = (gcnew System::Windows::Forms::Button());
			this->btn_VenderTodoFrutoHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_VenderTodoFrutoAVL = (gcnew System::Windows::Forms::Button());
			this->btn_VenderTodoFrutoAB = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_ComprarAB
			// 
			this->btn_ComprarAB->Location = System::Drawing::Point(331, 117);
			this->btn_ComprarAB->Name = L"btn_ComprarAB";
			this->btn_ComprarAB->Size = System::Drawing::Size(103, 47);
			this->btn_ComprarAB->TabIndex = 0;
			this->btn_ComprarAB->Text = L"Comprar";
			this->btn_ComprarAB->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarAVL
			// 
			this->btn_ComprarAVL->Location = System::Drawing::Point(331, 191);
			this->btn_ComprarAVL->Name = L"btn_ComprarAVL";
			this->btn_ComprarAVL->Size = System::Drawing::Size(103, 47);
			this->btn_ComprarAVL->TabIndex = 1;
			this->btn_ComprarAVL->Text = L"Comprar";
			this->btn_ComprarAVL->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarHEAP
			// 
			this->btn_ComprarHEAP->Location = System::Drawing::Point(331, 265);
			this->btn_ComprarHEAP->Name = L"btn_ComprarHEAP";
			this->btn_ComprarHEAP->Size = System::Drawing::Size(103, 47);
			this->btn_ComprarHEAP->TabIndex = 2;
			this->btn_ComprarHEAP->Text = L"Comprar";
			this->btn_ComprarHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarSPLAY
			// 
			this->btn_ComprarSPLAY->Location = System::Drawing::Point(331, 341);
			this->btn_ComprarSPLAY->Name = L"btn_ComprarSPLAY";
			this->btn_ComprarSPLAY->Size = System::Drawing::Size(103, 47);
			this->btn_ComprarSPLAY->TabIndex = 3;
			this->btn_ComprarSPLAY->Text = L"Comprar";
			this->btn_ComprarSPLAY->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutoSPLAY
			// 
			this->btn_VenderFrutoSPLAY->Location = System::Drawing::Point(873, 371);
			this->btn_VenderFrutoSPLAY->Name = L"btn_VenderFrutoSPLAY";
			this->btn_VenderFrutoSPLAY->Size = System::Drawing::Size(103, 47);
			this->btn_VenderFrutoSPLAY->TabIndex = 7;
			this->btn_VenderFrutoSPLAY->Text = L"Vender 1";
			this->btn_VenderFrutoSPLAY->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutoHEAP
			// 
			this->btn_VenderFrutoHEAP->Location = System::Drawing::Point(873, 293);
			this->btn_VenderFrutoHEAP->Name = L"btn_VenderFrutoHEAP";
			this->btn_VenderFrutoHEAP->Size = System::Drawing::Size(103, 47);
			this->btn_VenderFrutoHEAP->TabIndex = 6;
			this->btn_VenderFrutoHEAP->Text = L"Vender 1";
			this->btn_VenderFrutoHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutoAVL
			// 
			this->btn_VenderFrutoAVL->Location = System::Drawing::Point(873, 206);
			this->btn_VenderFrutoAVL->Name = L"btn_VenderFrutoAVL";
			this->btn_VenderFrutoAVL->Size = System::Drawing::Size(103, 47);
			this->btn_VenderFrutoAVL->TabIndex = 5;
			this->btn_VenderFrutoAVL->Text = L"Vender 1";
			this->btn_VenderFrutoAVL->UseVisualStyleBackColor = true;
			// 
			// btn_VenderFrutoAB
			// 
			this->btn_VenderFrutoAB->Location = System::Drawing::Point(873, 127);
			this->btn_VenderFrutoAB->Name = L"btn_VenderFrutoAB";
			this->btn_VenderFrutoAB->Size = System::Drawing::Size(103, 47);
			this->btn_VenderFrutoAB->TabIndex = 4;
			this->btn_VenderFrutoAB->Text = L"Vender 1";
			this->btn_VenderFrutoAB->UseVisualStyleBackColor = true;
			// 
			// btn_ComprarEspanta
			// 
			this->btn_ComprarEspanta->Location = System::Drawing::Point(331, 421);
			this->btn_ComprarEspanta->Name = L"btn_ComprarEspanta";
			this->btn_ComprarEspanta->Size = System::Drawing::Size(103, 47);
			this->btn_ComprarEspanta->TabIndex = 8;
			this->btn_ComprarEspanta->Text = L"Comprar";
			this->btn_ComprarEspanta->UseVisualStyleBackColor = true;
			// 
			// btn_VenderTodoFrutoSPLAY
			// 
			this->btn_VenderTodoFrutoSPLAY->Location = System::Drawing::Point(1023, 371);
			this->btn_VenderTodoFrutoSPLAY->Name = L"btn_VenderTodoFrutoSPLAY";
			this->btn_VenderTodoFrutoSPLAY->Size = System::Drawing::Size(103, 65);
			this->btn_VenderTodoFrutoSPLAY->TabIndex = 12;
			this->btn_VenderTodoFrutoSPLAY->Text = L"Vender Todo";
			this->btn_VenderTodoFrutoSPLAY->UseVisualStyleBackColor = true;
			// 
			// btn_VenderTodoFrutoHEAP
			// 
			this->btn_VenderTodoFrutoHEAP->Location = System::Drawing::Point(1023, 293);
			this->btn_VenderTodoFrutoHEAP->Name = L"btn_VenderTodoFrutoHEAP";
			this->btn_VenderTodoFrutoHEAP->Size = System::Drawing::Size(103, 56);
			this->btn_VenderTodoFrutoHEAP->TabIndex = 11;
			this->btn_VenderTodoFrutoHEAP->Text = L"Vender Todo";
			this->btn_VenderTodoFrutoHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_VenderTodoFrutoAVL
			// 
			this->btn_VenderTodoFrutoAVL->Location = System::Drawing::Point(1023, 206);
			this->btn_VenderTodoFrutoAVL->Name = L"btn_VenderTodoFrutoAVL";
			this->btn_VenderTodoFrutoAVL->Size = System::Drawing::Size(103, 59);
			this->btn_VenderTodoFrutoAVL->TabIndex = 10;
			this->btn_VenderTodoFrutoAVL->Text = L"Vender Todo";
			this->btn_VenderTodoFrutoAVL->UseVisualStyleBackColor = true;
			// 
			// btn_VenderTodoFrutoAB
			// 
			this->btn_VenderTodoFrutoAB->Location = System::Drawing::Point(1023, 127);
			this->btn_VenderTodoFrutoAB->Name = L"btn_VenderTodoFrutoAB";
			this->btn_VenderTodoFrutoAB->Size = System::Drawing::Size(103, 58);
			this->btn_VenderTodoFrutoAB->TabIndex = 9;
			this->btn_VenderTodoFrutoAB->Text = L"Vender todo";
			this->btn_VenderTodoFrutoAB->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(51, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 61);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(51, 176);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 62);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(51, 250);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 62);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(51, 326);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(64, 62);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(51, 406);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(64, 62);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(592, 356);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(64, 62);
			this->pictureBox6->TabIndex = 21;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(592, 278);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(64, 62);
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(592, 191);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(64, 62);
			this->pictureBox8->TabIndex = 19;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(592, 113);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(64, 61);
			this->pictureBox9->TabIndex = 18;
			this->pictureBox9->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Arbol AB";
			this->label1->Click += gcnew System::EventHandler(this, &VentanaMercado::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Arbol AVL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(184, 278);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Arbol HEAP";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(184, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Arbol SPLAY";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(180, 434);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 20);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Espantapajaros";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(703, 384);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 20);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Fruto Arbol SPLAY";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(711, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 20);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Fruto Arbol HEAP";
			this->label7->Click += gcnew System::EventHandler(this, &VentanaMercado::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(711, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 20);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Fruto Arbol AVL";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(703, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 20);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Fruto Arbol AB";
			// 
			// VentanaMercado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1138, 560);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_VenderTodoFrutoSPLAY);
			this->Controls->Add(this->btn_VenderTodoFrutoHEAP);
			this->Controls->Add(this->btn_VenderTodoFrutoAVL);
			this->Controls->Add(this->btn_VenderTodoFrutoAB);
			this->Controls->Add(this->btn_ComprarEspanta);
			this->Controls->Add(this->btn_VenderFrutoSPLAY);
			this->Controls->Add(this->btn_VenderFrutoHEAP);
			this->Controls->Add(this->btn_VenderFrutoAVL);
			this->Controls->Add(this->btn_VenderFrutoAB);
			this->Controls->Add(this->btn_ComprarSPLAY);
			this->Controls->Add(this->btn_ComprarHEAP);
			this->Controls->Add(this->btn_ComprarAVL);
			this->Controls->Add(this->btn_ComprarAB);
			this->Name = L"VentanaMercado";
			this->Text = L"VentanaMercado";
			this->Load += gcnew System::EventHandler(this, &VentanaMercado::VentanaMercado_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void VentanaMercado_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
