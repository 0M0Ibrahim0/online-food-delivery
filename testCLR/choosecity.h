#pragma once
#include"makeorder.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for choosecity
	/// </summary>
	public ref class choosecity : public System::Windows::Forms::Form
	{
	public:
		choosecity(void)
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
		~choosecity()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  city_form;
	protected:
	private: Bunifu::Framework::UI::BunifuThinButton2^  order_nw;
	private: Bunifu::Framework::UI::BunifuThinButton2^  order_now;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel2;
	private: System::Windows::Forms::ComboBox^  area;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(choosecity::typeid));
			this->city_form = (gcnew System::Windows::Forms::Panel());
			this->order_nw = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->order_now = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->area = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->city_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// city_form
			// 
			this->city_form->Controls->Add(this->order_nw);
			this->city_form->Controls->Add(this->order_now);
			this->city_form->Controls->Add(this->bunifuCustomLabel2);
			this->city_form->Controls->Add(this->area);
			this->city_form->Controls->Add(this->bunifuCustomLabel1);
			this->city_form->Controls->Add(this->comboBox1);
			this->city_form->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->city_form->Location = System::Drawing::Point(16, 40);
			this->city_form->Name = L"city_form";
			this->city_form->Size = System::Drawing::Size(406, 224);
			this->city_form->TabIndex = 15;
			// 
			// order_nw
			// 
			this->order_nw->ActiveBorderThickness = 1;
			this->order_nw->ActiveCornerRadius = 20;
			this->order_nw->ActiveFillColor = System::Drawing::Color::Gray;
			this->order_nw->ActiveForecolor = System::Drawing::Color::White;
			this->order_nw->ActiveLineColor = System::Drawing::Color::Black;
			this->order_nw->BackColor = System::Drawing::SystemColors::Control;
			this->order_nw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_nw.BackgroundImage")));
			this->order_nw->ButtonText = L"Order Now";
			this->order_nw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->order_nw->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->order_nw->ForeColor = System::Drawing::Color::Black;
			this->order_nw->IdleBorderThickness = 1;
			this->order_nw->IdleCornerRadius = 20;
			this->order_nw->IdleFillColor = System::Drawing::Color::LightGray;
			this->order_nw->IdleForecolor = System::Drawing::Color::Black;
			this->order_nw->IdleLineColor = System::Drawing::Color::Black;
			this->order_nw->Location = System::Drawing::Point(131, 169);
			this->order_nw->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->order_nw->Name = L"order_nw";
			this->order_nw->Size = System::Drawing::Size(163, 41);
			this->order_nw->TabIndex = 10;
			this->order_nw->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->order_nw->Click += gcnew System::EventHandler(this, &choosecity::order_nw_Click);
			// 
			// order_now
			// 
			this->order_now->ActiveBorderThickness = 1;
			this->order_now->ActiveCornerRadius = 20;
			this->order_now->ActiveFillColor = System::Drawing::Color::Gray;
			this->order_now->ActiveForecolor = System::Drawing::Color::White;
			this->order_now->ActiveLineColor = System::Drawing::Color::Black;
			this->order_now->BackColor = System::Drawing::SystemColors::Control;
			this->order_now->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_now.BackgroundImage")));
			this->order_now->ButtonText = L"Oreder Now";
			this->order_now->Cursor = System::Windows::Forms::Cursors::Hand;
			this->order_now->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->order_now->ForeColor = System::Drawing::Color::Black;
			this->order_now->IdleBorderThickness = 1;
			this->order_now->IdleCornerRadius = 20;
			this->order_now->IdleFillColor = System::Drawing::Color::Gainsboro;
			this->order_now->IdleForecolor = System::Drawing::Color::Black;
			this->order_now->IdleLineColor = System::Drawing::Color::Black;
			this->order_now->Location = System::Drawing::Point(183, 292);
			this->order_now->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->order_now->Name = L"order_now";
			this->order_now->Size = System::Drawing::Size(139, 43);
			this->order_now->TabIndex = 9;
			this->order_now->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(260, 43);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(88, 17);
			this->bunifuCustomLabel2->TabIndex = 3;
			this->bunifuCustomLabel2->Text = L"choose area";
			// 
			// area
			// 
			this->area->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->area->FormattingEnabled = true;
			this->area->Location = System::Drawing::Point(236, 64);
			this->area->Name = L"area";
			this->area->Size = System::Drawing::Size(144, 23);
			this->area->TabIndex = 2;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(55, 43);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(85, 17);
			this->bunifuCustomLabel1->TabIndex = 1;
			this->bunifuCustomLabel1->Text = L"choose city";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(24, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 23);
			this->comboBox1->TabIndex = 0;
			// 
			// choosecity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 305);
			this->Controls->Add(this->city_form);
			this->Name = L"choosecity";
			this->Text = L"choosecity";
			this->Load += gcnew System::EventHandler(this, &choosecity::choosecity_Load);
			this->city_form->ResumeLayout(false);
			this->city_form->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void choosecity_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void order_nw_Click(System::Object^  sender, System::EventArgs^  e) {
	makeorder f;
	this->Hide();
	f.ShowDialog();
	this->Close();
}
};
}
