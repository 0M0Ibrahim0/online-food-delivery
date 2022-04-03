#pragma once
//#include"formuser.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for rate
	/// </summary>
	public ref class rate : public System::Windows::Forms::Form
	{
	public:
		rate(void)
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
		~rate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  Rate_form;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel15;
	private: Bunifu::Framework::UI::BunifuThinButton2^  done_rate;
	private: System::Windows::Forms::RichTextBox^  complaint;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel16;
	private: Bunifu::Framework::UI::BunifuRating^  bunifuRating1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(rate::typeid));
			this->Rate_form = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel15 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->done_rate = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->complaint = (gcnew System::Windows::Forms::RichTextBox());
			this->bunifuCustomLabel16 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuRating1 = (gcnew Bunifu::Framework::UI::BunifuRating());
			this->Rate_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// Rate_form
			// 
			this->Rate_form->Controls->Add(this->bunifuCustomLabel15);
			this->Rate_form->Controls->Add(this->done_rate);
			this->Rate_form->Controls->Add(this->complaint);
			this->Rate_form->Controls->Add(this->bunifuCustomLabel16);
			this->Rate_form->Controls->Add(this->bunifuRating1);
			this->Rate_form->Location = System::Drawing::Point(29, 11);
			this->Rate_form->Name = L"Rate_form";
			this->Rate_form->Size = System::Drawing::Size(365, 277);
			this->Rate_form->TabIndex = 29;
			// 
			// bunifuCustomLabel15
			// 
			this->bunifuCustomLabel15->AutoSize = true;
			this->bunifuCustomLabel15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuCustomLabel15->Location = System::Drawing::Point(16, 119);
			this->bunifuCustomLabel15->Name = L"bunifuCustomLabel15";
			this->bunifuCustomLabel15->Size = System::Drawing::Size(80, 17);
			this->bunifuCustomLabel15->TabIndex = 30;
			this->bunifuCustomLabel15->Text = L"Complaint";
			// 
			// done_rate
			// 
			this->done_rate->ActiveBorderThickness = 1;
			this->done_rate->ActiveCornerRadius = 20;
			this->done_rate->ActiveFillColor = System::Drawing::Color::Gray;
			this->done_rate->ActiveForecolor = System::Drawing::Color::White;
			this->done_rate->ActiveLineColor = System::Drawing::Color::Black;
			this->done_rate->BackColor = System::Drawing::SystemColors::Control;
			this->done_rate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"done_rate.BackgroundImage")));
			this->done_rate->ButtonText = L"Done";
			this->done_rate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->done_rate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->done_rate->ForeColor = System::Drawing::Color::Black;
			this->done_rate->IdleBorderThickness = 1;
			this->done_rate->IdleCornerRadius = 20;
			this->done_rate->IdleFillColor = System::Drawing::Color::LightGray;
			this->done_rate->IdleForecolor = System::Drawing::Color::Black;
			this->done_rate->IdleLineColor = System::Drawing::Color::Black;
			this->done_rate->Location = System::Drawing::Point(131, 214);
			this->done_rate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->done_rate->Name = L"done_rate";
			this->done_rate->Size = System::Drawing::Size(102, 38);
			this->done_rate->TabIndex = 29;
			this->done_rate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done_rate->Click += gcnew System::EventHandler(this, &rate::done_rate_Click);
			// 
			// complaint
			// 
			this->complaint->Location = System::Drawing::Point(106, 93);
			this->complaint->Name = L"complaint";
			this->complaint->Size = System::Drawing::Size(219, 96);
			this->complaint->TabIndex = 28;
			this->complaint->Text = L"";
			// 
			// bunifuCustomLabel16
			// 
			this->bunifuCustomLabel16->AutoSize = true;
			this->bunifuCustomLabel16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel16->ForeColor = System::Drawing::Color::Goldenrod;
			this->bunifuCustomLabel16->Location = System::Drawing::Point(128, 17);
			this->bunifuCustomLabel16->Name = L"bunifuCustomLabel16";
			this->bunifuCustomLabel16->Size = System::Drawing::Size(104, 21);
			this->bunifuCustomLabel16->TabIndex = 27;
			this->bunifuCustomLabel16->Text = L"Rate Order";
			// 
			// bunifuRating1
			// 
			this->bunifuRating1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuRating1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuRating1->Location = System::Drawing::Point(29, 37);
			this->bunifuRating1->Name = L"bunifuRating1";
			this->bunifuRating1->Size = System::Drawing::Size(316, 50);
			this->bunifuRating1->TabIndex = 9;
			this->bunifuRating1->Value = 0;
			// 
			// rate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 312);
			this->Controls->Add(this->Rate_form);
			this->Name = L"rate";
			this->Text = L"rate";
			this->Rate_form->ResumeLayout(false);
			this->Rate_form->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void done_rate_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
		/*formuser f;
		this->Hide();
		f.ShowDialog();
		this->Close();*/
	}
};
}
