#pragma once
#include"rate.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for doneorder
	/// </summary>
	public ref class doneorder : public System::Windows::Forms::Form
	{
	public:
		doneorder(void)
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
		~doneorder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  done_form;
	protected:
	private: Bunifu::Framework::UI::BunifuThinButton2^  order_done;
	private: Bunifu::Framework::UI::BunifuThinButton2^  cancel_order;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel10;
	private: System::Windows::Forms::ComboBox^  order_payment;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel11;
	private: Bunifu::Framework::UI::BunifuTextbox^  order_date;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel12;
	private: Bunifu::Framework::UI::BunifuTextbox^  order_time;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel13;
	private: Bunifu::Framework::UI::BunifuTextbox^  order_price;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel14;
	private: Bunifu::Framework::UI::BunifuTextbox^  del_boy;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(doneorder::typeid));
			this->done_form = (gcnew System::Windows::Forms::Panel());
			this->order_done = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->cancel_order = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomLabel10 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->order_payment = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel11 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->order_date = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel12 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->order_time = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel13 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->order_price = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel14 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->del_boy = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->done_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// done_form
			// 
			this->done_form->Controls->Add(this->order_done);
			this->done_form->Controls->Add(this->cancel_order);
			this->done_form->Controls->Add(this->bunifuCustomLabel10);
			this->done_form->Controls->Add(this->order_payment);
			this->done_form->Controls->Add(this->bunifuCustomLabel11);
			this->done_form->Controls->Add(this->order_date);
			this->done_form->Controls->Add(this->bunifuCustomLabel12);
			this->done_form->Controls->Add(this->order_time);
			this->done_form->Controls->Add(this->bunifuCustomLabel13);
			this->done_form->Controls->Add(this->order_price);
			this->done_form->Controls->Add(this->bunifuCustomLabel14);
			this->done_form->Controls->Add(this->del_boy);
			this->done_form->Location = System::Drawing::Point(21, 12);
			this->done_form->Name = L"done_form";
			this->done_form->Size = System::Drawing::Size(405, 274);
			this->done_form->TabIndex = 25;
			// 
			// order_done
			// 
			this->order_done->ActiveBorderThickness = 1;
			this->order_done->ActiveCornerRadius = 20;
			this->order_done->ActiveFillColor = System::Drawing::Color::Gray;
			this->order_done->ActiveForecolor = System::Drawing::Color::White;
			this->order_done->ActiveLineColor = System::Drawing::Color::Black;
			this->order_done->BackColor = System::Drawing::SystemColors::Control;
			this->order_done->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_done.BackgroundImage")));
			this->order_done->ButtonText = L"Done";
			this->order_done->Cursor = System::Windows::Forms::Cursors::Hand;
			this->order_done->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->order_done->ForeColor = System::Drawing::Color::Black;
			this->order_done->IdleBorderThickness = 1;
			this->order_done->IdleCornerRadius = 20;
			this->order_done->IdleFillColor = System::Drawing::Color::LightGray;
			this->order_done->IdleForecolor = System::Drawing::Color::Black;
			this->order_done->IdleLineColor = System::Drawing::Color::Black;
			this->order_done->Location = System::Drawing::Point(203, 228);
			this->order_done->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->order_done->Name = L"order_done";
			this->order_done->Size = System::Drawing::Size(163, 41);
			this->order_done->TabIndex = 35;
			this->order_done->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->order_done->Click += gcnew System::EventHandler(this, &doneorder::order_done_Click);
			// 
			// cancel_order
			// 
			this->cancel_order->ActiveBorderThickness = 1;
			this->cancel_order->ActiveCornerRadius = 20;
			this->cancel_order->ActiveFillColor = System::Drawing::Color::Gray;
			this->cancel_order->ActiveForecolor = System::Drawing::Color::White;
			this->cancel_order->ActiveLineColor = System::Drawing::Color::Black;
			this->cancel_order->BackColor = System::Drawing::SystemColors::Control;
			this->cancel_order->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancel_order.BackgroundImage")));
			this->cancel_order->ButtonText = L"Cancel Order";
			this->cancel_order->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel_order->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancel_order->ForeColor = System::Drawing::Color::Black;
			this->cancel_order->IdleBorderThickness = 1;
			this->cancel_order->IdleCornerRadius = 20;
			this->cancel_order->IdleFillColor = System::Drawing::Color::LightGray;
			this->cancel_order->IdleForecolor = System::Drawing::Color::Black;
			this->cancel_order->IdleLineColor = System::Drawing::Color::Black;
			this->cancel_order->Location = System::Drawing::Point(30, 228);
			this->cancel_order->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_order->Name = L"cancel_order";
			this->cancel_order->Size = System::Drawing::Size(145, 41);
			this->cancel_order->TabIndex = 34;
			this->cancel_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel10
			// 
			this->bunifuCustomLabel10->AutoSize = true;
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel10->Location = System::Drawing::Point(160, 99);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(69, 17);
			this->bunifuCustomLabel10->TabIndex = 28;
			this->bunifuCustomLabel10->Text = L"Payment";
			// 
			// order_payment
			// 
			this->order_payment->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->order_payment->FormattingEnabled = true;
			this->order_payment->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"cash", L"visa" });
			this->order_payment->Location = System::Drawing::Point(129, 120);
			this->order_payment->Name = L"order_payment";
			this->order_payment->Size = System::Drawing::Size(144, 21);
			this->order_payment->TabIndex = 27;
			// 
			// bunifuCustomLabel11
			// 
			this->bunifuCustomLabel11->AutoSize = true;
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel11->Location = System::Drawing::Point(299, 16);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(41, 17);
			this->bunifuCustomLabel11->TabIndex = 33;
			this->bunifuCustomLabel11->Text = L"Date";
			// 
			// order_date
			// 
			this->order_date->BackColor = System::Drawing::Color::Silver;
			this->order_date->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_date.BackgroundImage")));
			this->order_date->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->order_date->Enabled = false;
			this->order_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->order_date->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->order_date->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_date.Icon")));
			this->order_date->Location = System::Drawing::Point(261, 37);
			this->order_date->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->order_date->Name = L"order_date";
			this->order_date->Size = System::Drawing::Size(129, 31);
			this->order_date->TabIndex = 32;
			this->order_date->Tag = L"";
			this->order_date->text = L"";
			// 
			// bunifuCustomLabel12
			// 
			this->bunifuCustomLabel12->AutoSize = true;
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel12->Location = System::Drawing::Point(164, 16);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(88, 17);
			this->bunifuCustomLabel12->TabIndex = 31;
			this->bunifuCustomLabel12->Text = L"Order Time";
			// 
			// order_time
			// 
			this->order_time->BackColor = System::Drawing::Color::Silver;
			this->order_time->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_time.BackgroundImage")));
			this->order_time->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->order_time->Enabled = false;
			this->order_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->order_time->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->order_time->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_time.Icon")));
			this->order_time->Location = System::Drawing::Point(167, 37);
			this->order_time->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->order_time->Name = L"order_time";
			this->order_time->Size = System::Drawing::Size(76, 31);
			this->order_time->TabIndex = 30;
			this->order_time->Tag = L"";
			this->order_time->text = L"";
			// 
			// bunifuCustomLabel13
			// 
			this->bunifuCustomLabel13->AutoSize = true;
			this->bunifuCustomLabel13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel13->Location = System::Drawing::Point(169, 155);
			this->bunifuCustomLabel13->Name = L"bunifuCustomLabel13";
			this->bunifuCustomLabel13->Size = System::Drawing::Size(89, 17);
			this->bunifuCustomLabel13->TabIndex = 29;
			this->bunifuCustomLabel13->Text = L"Total Price";
			// 
			// order_price
			// 
			this->order_price->BackColor = System::Drawing::Color::Silver;
			this->order_price->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_price.BackgroundImage")));
			this->order_price->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->order_price->Enabled = false;
			this->order_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->order_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->order_price->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"order_price.Icon")));
			this->order_price->Location = System::Drawing::Point(150, 176);
			this->order_price->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->order_price->Name = L"order_price";
			this->order_price->Size = System::Drawing::Size(123, 31);
			this->order_price->TabIndex = 28;
			this->order_price->Tag = L"";
			this->order_price->text = L"";
			// 
			// bunifuCustomLabel14
			// 
			this->bunifuCustomLabel14->AutoSize = true;
			this->bunifuCustomLabel14->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel14->Location = System::Drawing::Point(27, 17);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(98, 17);
			this->bunifuCustomLabel14->TabIndex = 27;
			this->bunifuCustomLabel14->Text = L"delivery  boy";
			// 
			// del_boy
			// 
			this->del_boy->BackColor = System::Drawing::Color::Silver;
			this->del_boy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_boy.BackgroundImage")));
			this->del_boy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->del_boy->Enabled = false;
			this->del_boy->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->del_boy->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_boy.Icon")));
			this->del_boy->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->del_boy->Location = System::Drawing::Point(12, 37);
			this->del_boy->Name = L"del_boy";
			this->del_boy->Size = System::Drawing::Size(135, 31);
			this->del_boy->TabIndex = 7;
			this->del_boy->text = L"";
			// 
			// doneorder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 319);
			this->Controls->Add(this->done_form);
			this->Name = L"doneorder";
			this->Text = L"doneorder";
			this->done_form->ResumeLayout(false);
			this->done_form->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void order_done_Click(System::Object^  sender, System::EventArgs^  e) {
		rate f;
		this->Hide();
		f.ShowDialog();
		this->Close();
	}
};
}
