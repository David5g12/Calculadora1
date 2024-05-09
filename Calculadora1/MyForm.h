#pragma once

namespace Calculadora1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		short numero1, numero2, resultado;
		char opercaion;
		bool punto = false;

	private: System::Windows::Forms::TextBox^ TxtNumeros;
	protected:
	private: System::Windows::Forms::Button^ Btn9;
	private: System::Windows::Forms::Button^ Btn4;
	private: System::Windows::Forms::Button^ Btn5;
	private: System::Windows::Forms::Button^ Btn7;
	private: System::Windows::Forms::Button^ Btn8;
	private: System::Windows::Forms::Button^ Btn6;
	private: System::Windows::Forms::Button^ BtnSuma;
	private: System::Windows::Forms::Button^ Btn3;
	private: System::Windows::Forms::Button^ Btn1;
	private: System::Windows::Forms::Button^ BtnDividir;
	private: System::Windows::Forms::Button^ BtnIgual;
	private: System::Windows::Forms::Button^ BtnPunto;
	private: System::Windows::Forms::Button^ BtnCero;
	private: System::Windows::Forms::Button^ Btn2;
	private: System::Windows::Forms::Button^ BtnResta;
	private: System::Windows::Forms::Button^ BtnMultiplicar;
	private: System::Windows::Forms::Button^ BtnBorrar;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TxtNumeros = (gcnew System::Windows::Forms::TextBox());
			this->Btn9 = (gcnew System::Windows::Forms::Button());
			this->Btn4 = (gcnew System::Windows::Forms::Button());
			this->Btn5 = (gcnew System::Windows::Forms::Button());
			this->Btn7 = (gcnew System::Windows::Forms::Button());
			this->Btn8 = (gcnew System::Windows::Forms::Button());
			this->Btn6 = (gcnew System::Windows::Forms::Button());
			this->BtnSuma = (gcnew System::Windows::Forms::Button());
			this->Btn3 = (gcnew System::Windows::Forms::Button());
			this->Btn1 = (gcnew System::Windows::Forms::Button());
			this->BtnDividir = (gcnew System::Windows::Forms::Button());
			this->BtnIgual = (gcnew System::Windows::Forms::Button());
			this->BtnPunto = (gcnew System::Windows::Forms::Button());
			this->BtnCero = (gcnew System::Windows::Forms::Button());
			this->Btn2 = (gcnew System::Windows::Forms::Button());
			this->BtnResta = (gcnew System::Windows::Forms::Button());
			this->BtnMultiplicar = (gcnew System::Windows::Forms::Button());
			this->BtnBorrar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// TxtNumeros
			// 
			this->TxtNumeros->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TxtNumeros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNumeros->Location = System::Drawing::Point(10, 31);
			this->TxtNumeros->Name = L"TxtNumeros";
			this->TxtNumeros->Size = System::Drawing::Size(252, 45);
			this->TxtNumeros->TabIndex = 57;
			// 
			// Btn9
			// 
			this->Btn9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn9->BackColor = System::Drawing::Color::Black;
			this->Btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn9->ForeColor = System::Drawing::Color::White;
			this->Btn9->Location = System::Drawing::Point(182, 106);
			this->Btn9->Name = L"Btn9";
			this->Btn9->Size = System::Drawing::Size(80, 80);
			this->Btn9->TabIndex = 56;
			this->Btn9->Text = L"9";
			this->Btn9->UseVisualStyleBackColor = false;
			this->Btn9->Click += gcnew System::EventHandler(this, &MyForm::Btn9_Click);
			// 
			// Btn4
			// 
			this->Btn4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn4->BackColor = System::Drawing::Color::Black;
			this->Btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn4->ForeColor = System::Drawing::Color::White;
			this->Btn4->Location = System::Drawing::Point(10, 192);
			this->Btn4->Name = L"Btn4";
			this->Btn4->Size = System::Drawing::Size(80, 80);
			this->Btn4->TabIndex = 55;
			this->Btn4->Text = L"4";
			this->Btn4->UseVisualStyleBackColor = false;
			this->Btn4->Click += gcnew System::EventHandler(this, &MyForm::Btn4_Click);
			// 
			// Btn5
			// 
			this->Btn5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn5->BackColor = System::Drawing::Color::Black;
			this->Btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn5->ForeColor = System::Drawing::Color::White;
			this->Btn5->Location = System::Drawing::Point(96, 192);
			this->Btn5->Name = L"Btn5";
			this->Btn5->Size = System::Drawing::Size(80, 80);
			this->Btn5->TabIndex = 54;
			this->Btn5->Text = L"5";
			this->Btn5->UseVisualStyleBackColor = false;
			this->Btn5->Click += gcnew System::EventHandler(this, &MyForm::Btn5_Click);
			// 
			// Btn7
			// 
			this->Btn7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn7->BackColor = System::Drawing::Color::Black;
			this->Btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn7->ForeColor = System::Drawing::Color::White;
			this->Btn7->Location = System::Drawing::Point(10, 106);
			this->Btn7->Name = L"Btn7";
			this->Btn7->Size = System::Drawing::Size(80, 80);
			this->Btn7->TabIndex = 53;
			this->Btn7->Text = L"7";
			this->Btn7->UseVisualStyleBackColor = false;
			this->Btn7->Click += gcnew System::EventHandler(this, &MyForm::Btn7_Click);
			// 
			// Btn8
			// 
			this->Btn8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn8->BackColor = System::Drawing::Color::Black;
			this->Btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn8->ForeColor = System::Drawing::Color::White;
			this->Btn8->Location = System::Drawing::Point(96, 106);
			this->Btn8->Name = L"Btn8";
			this->Btn8->Size = System::Drawing::Size(80, 80);
			this->Btn8->TabIndex = 52;
			this->Btn8->Text = L"8";
			this->Btn8->UseVisualStyleBackColor = false;
			this->Btn8->Click += gcnew System::EventHandler(this, &MyForm::Btn8_Click);
			// 
			// Btn6
			// 
			this->Btn6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn6->BackColor = System::Drawing::Color::Black;
			this->Btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn6->ForeColor = System::Drawing::Color::White;
			this->Btn6->Location = System::Drawing::Point(182, 192);
			this->Btn6->Name = L"Btn6";
			this->Btn6->Size = System::Drawing::Size(80, 80);
			this->Btn6->TabIndex = 51;
			this->Btn6->Text = L"6";
			this->Btn6->UseVisualStyleBackColor = false;
			this->Btn6->Click += gcnew System::EventHandler(this, &MyForm::Btn6_Click);
			// 
			// BtnSuma
			// 
			this->BtnSuma->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnSuma->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BtnSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnSuma->Location = System::Drawing::Point(268, 106);
			this->BtnSuma->Name = L"BtnSuma";
			this->BtnSuma->Size = System::Drawing::Size(80, 80);
			this->BtnSuma->TabIndex = 50;
			this->BtnSuma->Text = L"+";
			this->BtnSuma->UseVisualStyleBackColor = false;
			this->BtnSuma->Click += gcnew System::EventHandler(this, &MyForm::BtnSuma_Click);
			// 
			// Btn3
			// 
			this->Btn3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn3->BackColor = System::Drawing::Color::Black;
			this->Btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn3->ForeColor = System::Drawing::Color::White;
			this->Btn3->Location = System::Drawing::Point(182, 278);
			this->Btn3->Name = L"Btn3";
			this->Btn3->Size = System::Drawing::Size(80, 80);
			this->Btn3->TabIndex = 49;
			this->Btn3->Text = L"3";
			this->Btn3->UseVisualStyleBackColor = false;
			this->Btn3->Click += gcnew System::EventHandler(this, &MyForm::Btn3_Click);
			// 
			// Btn1
			// 
			this->Btn1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn1->BackColor = System::Drawing::Color::Black;
			this->Btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn1->ForeColor = System::Drawing::Color::White;
			this->Btn1->Location = System::Drawing::Point(10, 278);
			this->Btn1->Name = L"Btn1";
			this->Btn1->Size = System::Drawing::Size(80, 80);
			this->Btn1->TabIndex = 48;
			this->Btn1->Text = L"1";
			this->Btn1->UseVisualStyleBackColor = false;
			this->Btn1->Click += gcnew System::EventHandler(this, &MyForm::Btn1_Click);
			// 
			// BtnDividir
			// 
			this->BtnDividir->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnDividir->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BtnDividir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDividir->Location = System::Drawing::Point(268, 364);
			this->BtnDividir->Name = L"BtnDividir";
			this->BtnDividir->Size = System::Drawing::Size(80, 80);
			this->BtnDividir->TabIndex = 47;
			this->BtnDividir->Text = L"/";
			this->BtnDividir->UseVisualStyleBackColor = false;
			this->BtnDividir->Click += gcnew System::EventHandler(this, &MyForm::BtnDividir_Click);
			// 
			// BtnIgual
			// 
			this->BtnIgual->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnIgual->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BtnIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnIgual->Location = System::Drawing::Point(182, 364);
			this->BtnIgual->Name = L"BtnIgual";
			this->BtnIgual->Size = System::Drawing::Size(80, 80);
			this->BtnIgual->TabIndex = 46;
			this->BtnIgual->Text = L"=";
			this->BtnIgual->UseVisualStyleBackColor = false;
			this->BtnIgual->Click += gcnew System::EventHandler(this, &MyForm::BtnIgual_Click);
			// 
			// BtnPunto
			// 
			this->BtnPunto->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnPunto->BackColor = System::Drawing::Color::Black;
			this->BtnPunto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnPunto->ForeColor = System::Drawing::Color::White;
			this->BtnPunto->Location = System::Drawing::Point(96, 364);
			this->BtnPunto->Name = L"BtnPunto";
			this->BtnPunto->Size = System::Drawing::Size(80, 80);
			this->BtnPunto->TabIndex = 45;
			this->BtnPunto->Text = L".";
			this->BtnPunto->UseVisualStyleBackColor = false;
			this->BtnPunto->Click += gcnew System::EventHandler(this, &MyForm::BtnPunto_Click);
			// 
			// BtnCero
			// 
			this->BtnCero->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnCero->BackColor = System::Drawing::Color::Black;
			this->BtnCero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnCero->ForeColor = System::Drawing::Color::White;
			this->BtnCero->Location = System::Drawing::Point(10, 364);
			this->BtnCero->Name = L"BtnCero";
			this->BtnCero->Size = System::Drawing::Size(80, 80);
			this->BtnCero->TabIndex = 44;
			this->BtnCero->Text = L"0";
			this->BtnCero->UseVisualStyleBackColor = false;
			this->BtnCero->Click += gcnew System::EventHandler(this, &MyForm::BtnCero_Click);
			// 
			// Btn2
			// 
			this->Btn2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Btn2->BackColor = System::Drawing::Color::Black;
			this->Btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn2->ForeColor = System::Drawing::Color::White;
			this->Btn2->Location = System::Drawing::Point(96, 278);
			this->Btn2->Name = L"Btn2";
			this->Btn2->Size = System::Drawing::Size(80, 80);
			this->Btn2->TabIndex = 43;
			this->Btn2->Text = L"2";
			this->Btn2->UseVisualStyleBackColor = false;
			this->Btn2->Click += gcnew System::EventHandler(this, &MyForm::Btn2_Click);
			// 
			// BtnResta
			// 
			this->BtnResta->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnResta->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BtnResta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnResta->Location = System::Drawing::Point(268, 192);
			this->BtnResta->Name = L"BtnResta";
			this->BtnResta->Size = System::Drawing::Size(80, 80);
			this->BtnResta->TabIndex = 42;
			this->BtnResta->Text = L"-";
			this->BtnResta->UseVisualStyleBackColor = false;
			this->BtnResta->Click += gcnew System::EventHandler(this, &MyForm::BtnResta_Click);
			// 
			// BtnMultiplicar
			// 
			this->BtnMultiplicar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnMultiplicar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BtnMultiplicar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMultiplicar->Location = System::Drawing::Point(268, 278);
			this->BtnMultiplicar->Name = L"BtnMultiplicar";
			this->BtnMultiplicar->Size = System::Drawing::Size(80, 80);
			this->BtnMultiplicar->TabIndex = 41;
			this->BtnMultiplicar->Text = L"*";
			this->BtnMultiplicar->UseVisualStyleBackColor = false;
			this->BtnMultiplicar->Click += gcnew System::EventHandler(this, &MyForm::BtnMultiplicar_Click);
			// 
			// BtnBorrar
			// 
			this->BtnBorrar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BtnBorrar->BackColor = System::Drawing::Color::Red;
			this->BtnBorrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBorrar->Location = System::Drawing::Point(268, 20);
			this->BtnBorrar->Name = L"BtnBorrar";
			this->BtnBorrar->Size = System::Drawing::Size(80, 80);
			this->BtnBorrar->TabIndex = 40;
			this->BtnBorrar->Text = L"x";
			this->BtnBorrar->UseVisualStyleBackColor = false;
			this->BtnBorrar->Click += gcnew System::EventHandler(this, &MyForm::BtnBorrar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Location = System::Drawing::Point(3, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(357, 453);
			this->groupBox1->TabIndex = 58;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calculadora ASM";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(363, 466);
			this->Controls->Add(this->TxtNumeros);
			this->Controls->Add(this->Btn9);
			this->Controls->Add(this->Btn4);
			this->Controls->Add(this->Btn5);
			this->Controls->Add(this->Btn7);
			this->Controls->Add(this->Btn8);
			this->Controls->Add(this->Btn6);
			this->Controls->Add(this->BtnSuma);
			this->Controls->Add(this->Btn3);
			this->Controls->Add(this->Btn1);
			this->Controls->Add(this->BtnDividir);
			this->Controls->Add(this->BtnIgual);
			this->Controls->Add(this->BtnPunto);
			this->Controls->Add(this->BtnCero);
			this->Controls->Add(this->Btn2);
			this->Controls->Add(this->BtnResta);
			this->Controls->Add(this->BtnMultiplicar);
			this->Controls->Add(this->BtnBorrar);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	   private: System::Void Btn1_Click(System::Object^ sender, System::EventArgs^ e) {

		   TxtNumeros->Text += "1";
	   }
       private: System::Void Btn2_Click(System::Object^ sender, System::EventArgs^ e) {

		   TxtNumeros->Text += "2";
       }
       private: System::Void Btn3_Click(System::Object^ sender, System::EventArgs^ e) {

		   TxtNumeros->Text += "3";
       }
       private: System::Void Btn4_Click(System::Object^ sender, System::EventArgs^ e) {

		   TxtNumeros->Text += "4";
       }
       private: System::Void Btn5_Click(System::Object^ sender, System::EventArgs^ e) {

		   TxtNumeros->Text += "5";
       }
       private: System::Void Btn6_Click(System::Object^ sender, System::EventArgs^ e) { 

		   TxtNumeros->Text += "6";
	   }
       private: System::Void Btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		   TxtNumeros->Text += "7";
       }
       private: System::Void Btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		   TxtNumeros->Text += "8";
       }
       private: System::Void Btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		   TxtNumeros->Text += "9";
       }
       private: System::Void BtnCero_Click(System::Object^ sender, System::EventArgs^ e) {
		   TxtNumeros->Text += "0";
       }
       private: System::Void BtnPunto_Click(System::Object^ sender, System::EventArgs^ e) {

		   if (!TxtNumeros->Text->Contains("."))
		   {
			   // Agrega el punto al final del texto
			   TxtNumeros->Text += ".";
		   }
       }
       private: System::Void BtnSuma_Click(System::Object^ sender, System::EventArgs^ e) {

		   punto = false;
		   numero1 = Convert::ToDouble(TxtNumeros->Text);
		   TxtNumeros->Text = "";
		   opercaion = '+';
       }
       private: System::Void BtnResta_Click(System::Object^ sender, System::EventArgs^ e) {

		   punto = false;
		   numero1 = Convert::ToDouble(TxtNumeros->Text);
		   TxtNumeros->Text = "";
		   opercaion = '-';
       }
       private: System::Void BtnMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {

		   punto = false;
		   numero1 = Convert::ToDouble(TxtNumeros->Text);
		   TxtNumeros->Text = "";
		   opercaion = '*';
       }
       private: System::Void BtnDividir_Click(System::Object^ sender, System::EventArgs^ e) {

		   punto = false;
		   numero1 = Convert::ToDouble(TxtNumeros->Text);
		   TxtNumeros->Text = "";
		   opercaion = '/';
       }
       private: System::Void BtnIgual_Click(System::Object^ sender, System::EventArgs^ e) {

		   numero2 = Convert::ToDouble(TxtNumeros->Text);
		    
		   switch (opercaion)
		   {
		   case'+':

			   _asm
			   {
				   mov ax, numero1
				   mov bx, numero2
				   add ax, bx
				   mov resultado, ax
			   }

			   break;
			   			   		   
		   case'-':

			   _asm
			   {
				   mov ax, numero1
				   mov bx, numero2
				   sub ax, bx
				   mov resultado, ax
			   }

			  
			   break;
			   
			   
			  
		   case'*':
			   
			   _asm
			   {
				   mov ax, numero1
				   mov bx, numero2
				   imul ax, bx
				   mov resultado, ax
			   }

			   
			   break;			   

		   case'/':
			   
			   if (numero2 != 0)
			   {
				   _asm
				   {
					   xor dx, dx
					   mov ax, numero1
					   mov bx, numero2
					   div bx
					   mov resultado, ax
				   }
			   }
			   
			   break;   

		   }
		   TxtNumeros->Text = Convert::ToString(resultado);
		   punto = false;
		   
       }
       private: System::Void BtnBorrar_Click(System::Object^ sender, System::EventArgs^ e) {

			TxtNumeros->Text = "";
        
	   }
    };
}
