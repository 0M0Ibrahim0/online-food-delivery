#pragma once
//#include"MyForm.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for signup
	/// </summary>
	public ref class signup : public System::Windows::Forms::Form
	{
	public:
		signup(void)
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
		~signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  signup_form;
	protected:
	private: Bunifu::Framework::UI::BunifuThinButton2^  sign;
	private: Bunifu::Framework::UI::BunifuTextbox^  conf_pass;
	private: Bunifu::Framework::UI::BunifuTextbox^  sign_pass;
	private: Bunifu::Framework::UI::BunifuTextbox^  sign_user;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(signup::typeid));
			this->signup_form = (gcnew System::Windows::Forms::Panel());
			this->sign = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->conf_pass = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->sign_pass = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->sign_user = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->signup_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// signup_form
			// 
			this->signup_form->Controls->Add(this->sign);
			this->signup_form->Controls->Add(this->conf_pass);
			this->signup_form->Controls->Add(this->sign_pass);
			this->signup_form->Controls->Add(this->sign_user);
			this->signup_form->Location = System::Drawing::Point(30, 12);
			this->signup_form->Name = L"signup_form";
			this->signup_form->Size = System::Drawing::Size(374, 314);
			this->signup_form->TabIndex = 13;
			// 
			// sign
			// 
			this->sign->ActiveBorderThickness = 1;
			this->sign->ActiveCornerRadius = 20;
			this->sign->ActiveFillColor = System::Drawing::Color::Gray;
			this->sign->ActiveForecolor = System::Drawing::Color::White;
			this->sign->ActiveLineColor = System::Drawing::Color::Black;
			this->sign->BackColor = System::Drawing::SystemColors::Control;
			this->sign->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign.BackgroundImage")));
			this->sign->ButtonText = L"Sign Up";
			this->sign->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sign->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sign->ForeColor = System::Drawing::Color::Black;
			this->sign->IdleBorderThickness = 1;
			this->sign->IdleCornerRadius = 20;
			this->sign->IdleFillColor = System::Drawing::Color::LightGray;
			this->sign->IdleForecolor = System::Drawing::Color::Black;
			this->sign->IdleLineColor = System::Drawing::Color::Black;
			this->sign->Location = System::Drawing::Point(121, 249);
			this->sign->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(163, 41);
			this->sign->TabIndex = 12;
			this->sign->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sign->Click += gcnew System::EventHandler(this, &signup::sign_Click);
			// 
			// conf_pass
			// 
			this->conf_pass->BackColor = System::Drawing::Color::Silver;
			this->conf_pass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"conf_pass.BackgroundImage")));
			this->conf_pass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->conf_pass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->conf_pass->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"conf_pass.Icon")));
			this->conf_pass->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->conf_pass->Location = System::Drawing::Point(79, 182);
			this->conf_pass->Name = L"conf_pass";
			this->conf_pass->Size = System::Drawing::Size(250, 42);
			this->conf_pass->TabIndex = 11;
			this->conf_pass->text = L"Confirm  Password";
			// 
			// sign_pass
			// 
			this->sign_pass->BackColor = System::Drawing::Color::Silver;
			this->sign_pass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign_pass.BackgroundImage")));
			this->sign_pass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sign_pass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sign_pass->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign_pass.Icon")));
			this->sign_pass->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->sign_pass->Location = System::Drawing::Point(79, 121);
			this->sign_pass->Name = L"sign_pass";
			this->sign_pass->Size = System::Drawing::Size(250, 42);
			this->sign_pass->TabIndex = 10;
			this->sign_pass->text = L"Password";
			// 
			// sign_user
			// 
			this->sign_user->BackColor = System::Drawing::Color::Silver;
			this->sign_user->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign_user.BackgroundImage")));
			this->sign_user->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sign_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign_user->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sign_user->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign_user.Icon")));
			this->sign_user->Location = System::Drawing::Point(75, 59);
			this->sign_user->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->sign_user->Name = L"sign_user";
			this->sign_user->Size = System::Drawing::Size(254, 42);
			this->sign_user->TabIndex = 9;
			this->sign_user->Tag = L"";
			this->sign_user->text = L"User Name";
			// 
			// signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 346);
			this->Controls->Add(this->signup_form);
			this->Name = L"signup";
			this->Text = L"signup";
			this->signup_form->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void sign_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
		
	}
};
}
