#pragma once
#include"calsses.h"
#include"myorder.h"
#include"formuser.h"
#include"choosecity.h"
#include"signup.h"

using namespace std;

namespace testCLR {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm()
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
	private: Bunifu::Framework::UI::BunifuTextbox^  txt_user;
	private: Bunifu::Framework::UI::BunifuTextbox^  txt_pass;
	protected:

	protected:

	private: Bunifu::Framework::UI::BunifuThinButton2^  log_admin;
	private: Bunifu::Framework::UI::BunifuThinButton2^  login_user;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	private: Bunifu::Framework::UI::BunifuThinButton2^  sign_up;
	private: System::Windows::Forms::Panel^  login_form;




































































































	protected:



	protected:


	protected:

	protected:





	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txt_user = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->txt_pass = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->log_admin = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->login_user = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->sign_up = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->login_form = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->login_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// txt_user
			// 
			this->txt_user->BackColor = System::Drawing::Color::Silver;
			this->txt_user->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"txt_user.BackgroundImage")));
			this->txt_user->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->txt_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_user->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_user->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"txt_user.Icon")));
			this->txt_user->Location = System::Drawing::Point(3, 14);
			this->txt_user->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(254, 42);
			this->txt_user->TabIndex = 3;
			this->txt_user->Tag = L"";
			this->txt_user->text = L"User Name";
			this->txt_user->OnTextChange += gcnew System::EventHandler(this, &MyForm::bunifuTextbox1_OnTextChange);
			// 
			// txt_pass
			// 
			this->txt_pass->BackColor = System::Drawing::Color::Silver;
			this->txt_pass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"txt_pass.BackgroundImage")));
			this->txt_pass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->txt_pass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_pass->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"txt_pass.Icon")));
			this->txt_pass->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->txt_pass->Location = System::Drawing::Point(275, 14);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(250, 42);
			this->txt_pass->TabIndex = 4;
			this->txt_pass->text = L"Password";
			this->txt_pass->OnTextChange += gcnew System::EventHandler(this, &MyForm::txt_pass_OnTextChange);
			// 
			// log_admin
			// 
			this->log_admin->ActiveBorderThickness = 1;
			this->log_admin->ActiveCornerRadius = 20;
			this->log_admin->ActiveFillColor = System::Drawing::Color::Gray;
			this->log_admin->ActiveForecolor = System::Drawing::Color::White;
			this->log_admin->ActiveLineColor = System::Drawing::Color::Black;
			this->log_admin->BackColor = System::Drawing::SystemColors::Control;
			this->log_admin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_admin.BackgroundImage")));
			this->log_admin->ButtonText = L"Login as Admin";
			this->log_admin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->log_admin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->log_admin->ForeColor = System::Drawing::Color::Black;
			this->log_admin->IdleBorderThickness = 1;
			this->log_admin->IdleCornerRadius = 20;
			this->log_admin->IdleFillColor = System::Drawing::Color::Gainsboro;
			this->log_admin->IdleForecolor = System::Drawing::Color::Black;
			this->log_admin->IdleLineColor = System::Drawing::Color::Black;
			this->log_admin->Location = System::Drawing::Point(76, 76);
			this->log_admin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->log_admin->Name = L"log_admin";
			this->log_admin->Size = System::Drawing::Size(139, 43);
			this->log_admin->TabIndex = 6;
			this->log_admin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->log_admin->Click += gcnew System::EventHandler(this, &MyForm::log_admin_Click);
			// 
			// login_user
			// 
			this->login_user->ActiveBorderThickness = 1;
			this->login_user->ActiveCornerRadius = 20;
			this->login_user->ActiveFillColor = System::Drawing::Color::Gray;
			this->login_user->ActiveForecolor = System::Drawing::Color::White;
			this->login_user->ActiveLineColor = System::Drawing::Color::Black;
			this->login_user->BackColor = System::Drawing::SystemColors::Control;
			this->login_user->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_user.BackgroundImage")));
			this->login_user->ButtonText = L"Login as Customer";
			this->login_user->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login_user->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->login_user->ForeColor = System::Drawing::Color::Black;
			this->login_user->IdleBorderThickness = 1;
			this->login_user->IdleCornerRadius = 20;
			this->login_user->IdleFillColor = System::Drawing::Color::LightGray;
			this->login_user->IdleForecolor = System::Drawing::Color::Black;
			this->login_user->IdleLineColor = System::Drawing::Color::Black;
			this->login_user->Location = System::Drawing::Point(297, 76);
			this->login_user->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->login_user->Name = L"login_user";
			this->login_user->Size = System::Drawing::Size(163, 41);
			this->login_user->TabIndex = 7;
			this->login_user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->login_user->Click += gcnew System::EventHandler(this, &MyForm::login_user_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Gray;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(546, 1);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(32, 27);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 8;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuImageButton1_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Silver;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(511, 1);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(29, 27);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 9;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &MyForm::bunifuImageButton2_Click);
			// 
			// sign_up
			// 
			this->sign_up->ActiveBorderThickness = 1;
			this->sign_up->ActiveCornerRadius = 20;
			this->sign_up->ActiveFillColor = System::Drawing::Color::Gray;
			this->sign_up->ActiveForecolor = System::Drawing::Color::White;
			this->sign_up->ActiveLineColor = System::Drawing::Color::Black;
			this->sign_up->BackColor = System::Drawing::SystemColors::Control;
			this->sign_up->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign_up.BackgroundImage")));
			this->sign_up->ButtonText = L"Sign Up";
			this->sign_up->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sign_up->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sign_up->ForeColor = System::Drawing::Color::Black;
			this->sign_up->IdleBorderThickness = 1;
			this->sign_up->IdleCornerRadius = 20;
			this->sign_up->IdleFillColor = System::Drawing::Color::LightGray;
			this->sign_up->IdleForecolor = System::Drawing::Color::Black;
			this->sign_up->IdleLineColor = System::Drawing::Color::Black;
			this->sign_up->Location = System::Drawing::Point(183, 129);
			this->sign_up->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sign_up->Name = L"sign_up";
			this->sign_up->Size = System::Drawing::Size(163, 41);
			this->sign_up->TabIndex = 10;
			this->sign_up->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sign_up->Click += gcnew System::EventHandler(this, &MyForm::sign_up_Click);
			// 
			// login_form
			// 
			this->login_form->Controls->Add(this->txt_pass);
			this->login_form->Controls->Add(this->txt_user);
			this->login_form->Controls->Add(this->login_user);
			this->login_form->Controls->Add(this->sign_up);
			this->login_form->Controls->Add(this->log_admin);
			this->login_form->Location = System::Drawing::Point(12, 29);
			this->login_form->Name = L"login_form";
			this->login_form->Size = System::Drawing::Size(542, 195);
			this->login_form->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(579, 343);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->login_form);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->login_form->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String ^n;
		SqlConnection ^con = gcnew SqlConnection(n);
		Object ^o = gcnew Object();

		//DateTime.Now.ToString("yyyy-MM-dd h:mm:ss tt");
		MessageBox::Show("");
	}


	private: System::Void bunifuTextbox1_OnTextChange(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void log_admin_Click(System::Object^  sender, System::EventArgs^  e) {
//	login_user->BackColor.IsSystemColor = ;
	
}
private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void txt_pass_OnTextChange(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void sign_up_Click(System::Object^  sender, System::EventArgs^  e) {
signup	 f;
	
	f.ShowDialog();
	//this->Hide();
	//testCLR::Sign_up^ fm = gcnew Sign_up();
	//this->Hide();
	//fm->ShowDialog();
	//this->Close();
	//
		/* ins.MdiParent = this.MdiParent;
                this.Hide();
                ins.ShowDialog();
                this.Close();*/

}
private: System::Void makeorder_form_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void rest_order_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//if(rest_order->SelectedItem->ToString()=="kfc")rest_photo->Image=Resources
}
private: System::Void food_price_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void sign_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void login_user_Click(System::Object^  sender, System::EventArgs^  e) {
	formuser f;
	this->Hide();
	f.ShowDialog();
	this->Close();
}
}
	;
}