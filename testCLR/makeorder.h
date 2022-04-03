#pragma once
#include"doneorder.h"
#include"myorder.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for makeorder
	/// </summary>
	public ref class makeorder : public System::Windows::Forms::Form
	{
	public:
		makeorder(void)
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
		~makeorder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  check_out_form;
	private: Bunifu::Framework::UI::BunifuThinButton2^  check_out;
	protected:

	private: Bunifu::Framework::UI::BunifuThinButton2^  add_to_order;
	private: Bunifu::Framework::UI::BunifuTextbox^  item_price;
	private: System::Windows::Forms::PictureBox^  rest_photo;
	private: System::Windows::Forms::ComboBox^  item_quant;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel3;
	private: System::Windows::Forms::ComboBox^  rest_order;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  food_price;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel8;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel6;
	private: System::Windows::Forms::ComboBox^  item_choose;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel7;
	private: System::Windows::Forms::ComboBox^  category_order;
	private: Bunifu::Framework::UI::BunifuThinButton2^  showorder;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(makeorder::typeid));
			this->check_out_form = (gcnew System::Windows::Forms::Panel());
			this->showorder = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->check_out = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->add_to_order = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->item_price = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->rest_photo = (gcnew System::Windows::Forms::PictureBox());
			this->item_quant = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->rest_order = (gcnew System::Windows::Forms::ComboBox());
			this->food_price = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel8 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->item_choose = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel7 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->category_order = (gcnew System::Windows::Forms::ComboBox());
			this->check_out_form->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rest_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// check_out_form
			// 
			this->check_out_form->Controls->Add(this->showorder);
			this->check_out_form->Controls->Add(this->check_out);
			this->check_out_form->Controls->Add(this->add_to_order);
			this->check_out_form->Controls->Add(this->item_price);
			this->check_out_form->Controls->Add(this->rest_photo);
			this->check_out_form->Controls->Add(this->item_quant);
			this->check_out_form->Controls->Add(this->bunifuCustomLabel3);
			this->check_out_form->Controls->Add(this->rest_order);
			this->check_out_form->Controls->Add(this->food_price);
			this->check_out_form->Controls->Add(this->bunifuCustomLabel8);
			this->check_out_form->Controls->Add(this->bunifuCustomLabel6);
			this->check_out_form->Controls->Add(this->item_choose);
			this->check_out_form->Controls->Add(this->bunifuCustomLabel7);
			this->check_out_form->Controls->Add(this->category_order);
			this->check_out_form->Location = System::Drawing::Point(12, 12);
			this->check_out_form->Name = L"check_out_form";
			this->check_out_form->Size = System::Drawing::Size(464, 392);
			this->check_out_form->TabIndex = 24;
			// 
			// showorder
			// 
			this->showorder->ActiveBorderThickness = 1;
			this->showorder->ActiveCornerRadius = 20;
			this->showorder->ActiveFillColor = System::Drawing::Color::Gray;
			this->showorder->ActiveForecolor = System::Drawing::Color::White;
			this->showorder->ActiveLineColor = System::Drawing::Color::Black;
			this->showorder->BackColor = System::Drawing::SystemColors::Control;
			this->showorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showorder.BackgroundImage")));
			this->showorder->ButtonText = L"Show My Order";
			this->showorder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showorder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->showorder->ForeColor = System::Drawing::Color::Black;
			this->showorder->IdleBorderThickness = 1;
			this->showorder->IdleCornerRadius = 20;
			this->showorder->IdleFillColor = System::Drawing::Color::LightGray;
			this->showorder->IdleForecolor = System::Drawing::Color::Black;
			this->showorder->IdleLineColor = System::Drawing::Color::Black;
			this->showorder->Location = System::Drawing::Point(168, 309);
			this->showorder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->showorder->Name = L"showorder";
			this->showorder->Size = System::Drawing::Size(160, 41);
			this->showorder->TabIndex = 27;
			this->showorder->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->showorder->Click += gcnew System::EventHandler(this, &makeorder::showorder_Click);
			// 
			// check_out
			// 
			this->check_out->ActiveBorderThickness = 1;
			this->check_out->ActiveCornerRadius = 20;
			this->check_out->ActiveFillColor = System::Drawing::Color::Gray;
			this->check_out->ActiveForecolor = System::Drawing::Color::White;
			this->check_out->ActiveLineColor = System::Drawing::Color::Black;
			this->check_out->BackColor = System::Drawing::SystemColors::Control;
			this->check_out->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"check_out.BackgroundImage")));
			this->check_out->ButtonText = L"Check Out";
			this->check_out->Cursor = System::Windows::Forms::Cursors::Hand;
			this->check_out->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->check_out->ForeColor = System::Drawing::Color::Black;
			this->check_out->IdleBorderThickness = 1;
			this->check_out->IdleCornerRadius = 20;
			this->check_out->IdleFillColor = System::Drawing::Color::LightGray;
			this->check_out->IdleForecolor = System::Drawing::Color::Black;
			this->check_out->IdleLineColor = System::Drawing::Color::Black;
			this->check_out->Location = System::Drawing::Point(180, 346);
			this->check_out->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->check_out->Name = L"check_out";
			this->check_out->Size = System::Drawing::Size(129, 41);
			this->check_out->TabIndex = 26;
			this->check_out->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->check_out->Click += gcnew System::EventHandler(this, &makeorder::check_out_Click);
			// 
			// add_to_order
			// 
			this->add_to_order->ActiveBorderThickness = 1;
			this->add_to_order->ActiveCornerRadius = 20;
			this->add_to_order->ActiveFillColor = System::Drawing::Color::Gray;
			this->add_to_order->ActiveForecolor = System::Drawing::Color::White;
			this->add_to_order->ActiveLineColor = System::Drawing::Color::Black;
			this->add_to_order->BackColor = System::Drawing::SystemColors::Control;
			this->add_to_order->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_to_order.BackgroundImage")));
			this->add_to_order->ButtonText = L"Add To My Order";
			this->add_to_order->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_to_order->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->add_to_order->ForeColor = System::Drawing::Color::Black;
			this->add_to_order->IdleBorderThickness = 1;
			this->add_to_order->IdleCornerRadius = 20;
			this->add_to_order->IdleFillColor = System::Drawing::Color::LightGray;
			this->add_to_order->IdleForecolor = System::Drawing::Color::Black;
			this->add_to_order->IdleLineColor = System::Drawing::Color::Black;
			this->add_to_order->Location = System::Drawing::Point(165, 134);
			this->add_to_order->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->add_to_order->Name = L"add_to_order";
			this->add_to_order->Size = System::Drawing::Size(163, 41);
			this->add_to_order->TabIndex = 25;
			this->add_to_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// item_price
			// 
			this->item_price->BackColor = System::Drawing::Color::Silver;
			this->item_price->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item_price.BackgroundImage")));
			this->item_price->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->item_price->Enabled = false;
			this->item_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->item_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->item_price->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item_price.Icon")));
			this->item_price->Location = System::Drawing::Point(353, 101);
			this->item_price->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->item_price->Name = L"item_price";
			this->item_price->Size = System::Drawing::Size(79, 21);
			this->item_price->TabIndex = 24;
			this->item_price->Tag = L"";
			this->item_price->text = L"";
			// 
			// rest_photo
			// 
			this->rest_photo->Location = System::Drawing::Point(79, 183);
			this->rest_photo->Name = L"rest_photo";
			this->rest_photo->Size = System::Drawing::Size(353, 118);
			this->rest_photo->TabIndex = 21;
			this->rest_photo->TabStop = false;
			// 
			// item_quant
			// 
			this->item_quant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->item_quant->FormattingEnabled = true;
			this->item_quant->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9"
			});
			this->item_quant->Location = System::Drawing::Point(208, 101);
			this->item_quant->Name = L"item_quant";
			this->item_quant->Size = System::Drawing::Size(101, 21);
			this->item_quant->TabIndex = 19;
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(76, 27);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(131, 17);
			this->bunifuCustomLabel3->TabIndex = 18;
			this->bunifuCustomLabel3->Text = L"choose restaurant";
			// 
			// rest_order
			// 
			this->rest_order->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->rest_order->FormattingEnabled = true;
			this->rest_order->Location = System::Drawing::Point(73, 47);
			this->rest_order->Name = L"rest_order";
			this->rest_order->Size = System::Drawing::Size(144, 21);
			this->rest_order->TabIndex = 17;
			// 
			// food_price
			// 
			this->food_price->AutoSize = true;
			this->food_price->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->food_price->Location = System::Drawing::Point(350, 80);
			this->food_price->Name = L"food_price";
			this->food_price->Size = System::Drawing::Size(85, 17);
			this->food_price->TabIndex = 15;
			this->food_price->Text = L"Food Price";
			this->food_price->Click += gcnew System::EventHandler(this, &makeorder::food_price_Click);
			// 
			// bunifuCustomLabel8
			// 
			this->bunifuCustomLabel8->AutoSize = true;
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel8->Location = System::Drawing::Point(205, 81);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(123, 17);
			this->bunifuCustomLabel8->TabIndex = 13;
			this->bunifuCustomLabel8->Text = L"Choose Quantity";
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->Location = System::Drawing::Point(57, 81);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(94, 17);
			this->bunifuCustomLabel6->TabIndex = 12;
			this->bunifuCustomLabel6->Text = L"Choose Food";
			// 
			// item_choose
			// 
			this->item_choose->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->item_choose->FormattingEnabled = true;
			this->item_choose->Location = System::Drawing::Point(40, 101);
			this->item_choose->Name = L"item_choose";
			this->item_choose->Size = System::Drawing::Size(144, 21);
			this->item_choose->TabIndex = 11;
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->Location = System::Drawing::Point(320, 27);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(126, 17);
			this->bunifuCustomLabel7->TabIndex = 10;
			this->bunifuCustomLabel7->Text = L"Choose Category ";
			// 
			// category_order
			// 
			this->category_order->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->category_order->FormattingEnabled = true;
			this->category_order->Location = System::Drawing::Point(312, 47);
			this->category_order->Name = L"category_order";
			this->category_order->Size = System::Drawing::Size(144, 21);
			this->category_order->TabIndex = 9;
			// 
			// makeorder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 416);
			this->Controls->Add(this->check_out_form);
			this->Name = L"makeorder";
			this->Text = L"makeorder";
			this->Load += gcnew System::EventHandler(this, &makeorder::makeorder_Load);
			this->check_out_form->ResumeLayout(false);
			this->check_out_form->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rest_photo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void makeorder_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void food_price_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void check_out_Click(System::Object^  sender, System::EventArgs^  e) {
	doneorder f;
	this->Hide();
	f.ShowDialog();
	this->Close();
}
private: System::Void showorder_Click(System::Object^  sender, System::EventArgs^  e) {
	myorder c;
	
	c.ShowDialog();

}
};
}
