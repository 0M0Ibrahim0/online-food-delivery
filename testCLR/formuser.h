#pragma once
#include"choosecity.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formuser
	/// </summary>
	public ref class formuser : public System::Windows::Forms::Form
	{
	public:
		formuser(void)
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
		~formuser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  user_form;
	protected:
	private: Bunifu::Framework::UI::BunifuThinButton2^  show_order;
	private: Bunifu::Framework::UI::BunifuThinButton2^  order_nw;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formuser::typeid));
			this->user_form = (gcnew System::Windows::Forms::Panel());
			this->show_order = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->order_nw = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->user_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// user_form
			// 
			this->user_form->Controls->Add(this->show_order);
			this->user_form->Controls->Add(this->order_nw);
			this->user_form->Location = System::Drawing::Point(12, 23);
			this->user_form->Name = L"user_form";
			this->user_form->Size = System::Drawing::Size(260, 215);
			this->user_form->TabIndex = 31;
			// 
			// show_order
			// 
			this->show_order->ActiveBorderThickness = 1;
			this->show_order->ActiveCornerRadius = 20;
			this->show_order->ActiveFillColor = System::Drawing::Color::Gray;
			this->show_order->ActiveForecolor = System::Drawing::Color::White;
			this->show_order->ActiveLineColor = System::Drawing::Color::Black;
			this->show_order->BackColor = System::Drawing::SystemColors::Control;
			this->show_order->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"show_order.BackgroundImage")));
			this->show_order->ButtonText = L"Show My Old Orders";
			this->show_order->Cursor = System::Windows::Forms::Cursors::Hand;
			this->show_order->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->show_order->ForeColor = System::Drawing::Color::Black;
			this->show_order->IdleBorderThickness = 1;
			this->show_order->IdleCornerRadius = 20;
			this->show_order->IdleFillColor = System::Drawing::Color::LightGray;
			this->show_order->IdleForecolor = System::Drawing::Color::Black;
			this->show_order->IdleLineColor = System::Drawing::Color::Black;
			this->show_order->Location = System::Drawing::Point(52, 144);
			this->show_order->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->show_order->Name = L"show_order";
			this->show_order->Size = System::Drawing::Size(181, 41);
			this->show_order->TabIndex = 10;
			this->show_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->order_nw->Location = System::Drawing::Point(61, 51);
			this->order_nw->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->order_nw->Name = L"order_nw";
			this->order_nw->Size = System::Drawing::Size(163, 41);
			this->order_nw->TabIndex = 9;
			this->order_nw->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->order_nw->Click += gcnew System::EventHandler(this, &formuser::order_nw_Click);
			// 
			// formuser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->user_form);
			this->Name = L"formuser";
			this->Text = L"formuser";
			this->Load += gcnew System::EventHandler(this, &formuser::formuser_Load);
			this->user_form->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void formuser_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void order_nw_Click(System::Object^  sender, System::EventArgs^  e) {
	choosecity f;
	this->Hide();
	f.ShowDialog();
	this->Close();
}
};
}
