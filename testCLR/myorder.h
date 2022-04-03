#pragma once
//#include"makeorder.h"
namespace testCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for myorder
	/// </summary>
	public ref class myorder : public System::Windows::Forms::Form
	{
	public:
		myorder(void)
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
		~myorder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  myorder_form;
	protected:
	private: Bunifu::Framework::UI::BunifuThinButton2^  done_myorder;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  item_quantity;
	private: Bunifu::Framework::UI::BunifuTextbox^  item_quan;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel9;
	private: Bunifu::Framework::UI::BunifuTextbox^  tot_item_price;
	private: Bunifu::Framework::UI::BunifuTextbox^  myorder_price;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel4;
	private: System::Windows::Forms::ComboBox^  myorder_item;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(myorder::typeid));
			this->myorder_form = (gcnew System::Windows::Forms::Panel());
			this->done_myorder = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->item_quantity = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->item_quan = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel9 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->tot_item_price = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->myorder_price = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->myorder_item = (gcnew System::Windows::Forms::ComboBox());
			this->myorder_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// myorder_form
			// 
			this->myorder_form->Controls->Add(this->done_myorder);
			this->myorder_form->Controls->Add(this->item_quantity);
			this->myorder_form->Controls->Add(this->item_quan);
			this->myorder_form->Controls->Add(this->bunifuCustomLabel9);
			this->myorder_form->Controls->Add(this->tot_item_price);
			this->myorder_form->Controls->Add(this->myorder_price);
			this->myorder_form->Controls->Add(this->bunifuCustomLabel5);
			this->myorder_form->Controls->Add(this->bunifuCustomLabel4);
			this->myorder_form->Controls->Add(this->myorder_item);
			this->myorder_form->Location = System::Drawing::Point(5, 3);
			this->myorder_form->Name = L"myorder_form";
			this->myorder_form->Size = System::Drawing::Size(409, 290);
			this->myorder_form->TabIndex = 23;
			// 
			// done_myorder
			// 
			this->done_myorder->ActiveBorderThickness = 1;
			this->done_myorder->ActiveCornerRadius = 20;
			this->done_myorder->ActiveFillColor = System::Drawing::Color::Gray;
			this->done_myorder->ActiveForecolor = System::Drawing::Color::White;
			this->done_myorder->ActiveLineColor = System::Drawing::Color::Black;
			this->done_myorder->BackColor = System::Drawing::SystemColors::Control;
			this->done_myorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"done_myorder.BackgroundImage")));
			this->done_myorder->ButtonText = L"Done";
			this->done_myorder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->done_myorder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->done_myorder->ForeColor = System::Drawing::Color::Black;
			this->done_myorder->IdleBorderThickness = 1;
			this->done_myorder->IdleCornerRadius = 20;
			this->done_myorder->IdleFillColor = System::Drawing::Color::Gainsboro;
			this->done_myorder->IdleForecolor = System::Drawing::Color::Black;
			this->done_myorder->IdleLineColor = System::Drawing::Color::Black;
			this->done_myorder->Location = System::Drawing::Point(142, 249);
			this->done_myorder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->done_myorder->Name = L"done_myorder";
			this->done_myorder->Size = System::Drawing::Size(139, 43);
			this->done_myorder->TabIndex = 27;
			this->done_myorder->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done_myorder->Click += gcnew System::EventHandler(this, &myorder::done_myorder_Click);
			// 
			// item_quantity
			// 
			this->item_quantity->AutoSize = true;
			this->item_quantity->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->item_quantity->Location = System::Drawing::Point(250, 87);
			this->item_quantity->Name = L"item_quantity";
			this->item_quantity->Size = System::Drawing::Size(108, 17);
			this->item_quantity->TabIndex = 26;
			this->item_quantity->Text = L"Item Quantity";
			// 
			// item_quan
			// 
			this->item_quan->BackColor = System::Drawing::Color::Silver;
			this->item_quan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item_quan.BackgroundImage")));
			this->item_quan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->item_quan->Enabled = false;
			this->item_quan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->item_quan->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->item_quan->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item_quan.Icon")));
			this->item_quan->Location = System::Drawing::Point(268, 108);
			this->item_quan->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->item_quan->Name = L"item_quan";
			this->item_quan->Size = System::Drawing::Size(79, 31);
			this->item_quan->TabIndex = 25;
			this->item_quan->Tag = L"";
			this->item_quan->text = L"";
			// 
			// bunifuCustomLabel9
			// 
			this->bunifuCustomLabel9->AutoSize = true;
			this->bunifuCustomLabel9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel9->Location = System::Drawing::Point(35, 89);
			this->bunifuCustomLabel9->Name = L"bunifuCustomLabel9";
			this->bunifuCustomLabel9->Size = System::Drawing::Size(126, 17);
			this->bunifuCustomLabel9->TabIndex = 24;
			this->bunifuCustomLabel9->Text = L"Total Item Price";
			// 
			// tot_item_price
			// 
			this->tot_item_price->BackColor = System::Drawing::Color::Silver;
			this->tot_item_price->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tot_item_price.BackgroundImage")));
			this->tot_item_price->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tot_item_price->Enabled = false;
			this->tot_item_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tot_item_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tot_item_price->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tot_item_price.Icon")));
			this->tot_item_price->Location = System::Drawing::Point(59, 111);
			this->tot_item_price->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tot_item_price->Name = L"tot_item_price";
			this->tot_item_price->Size = System::Drawing::Size(79, 31);
			this->tot_item_price->TabIndex = 23;
			this->tot_item_price->Tag = L"";
			this->tot_item_price->text = L"";
			// 
			// myorder_price
			// 
			this->myorder_price->BackColor = System::Drawing::Color::Silver;
			this->myorder_price->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myorder_price.BackgroundImage")));
			this->myorder_price->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->myorder_price->Enabled = false;
			this->myorder_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->myorder_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->myorder_price->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myorder_price.Icon")));
			this->myorder_price->Location = System::Drawing::Point(135, 189);
			this->myorder_price->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->myorder_price->Name = L"myorder_price";
			this->myorder_price->Size = System::Drawing::Size(162, 42);
			this->myorder_price->TabIndex = 22;
			this->myorder_price->Tag = L"";
			this->myorder_price->text = L"";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(151, 168);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(118, 17);
			this->bunifuCustomLabel5->TabIndex = 21;
			this->bunifuCustomLabel5->Text = L"My Order Price";
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->Location = System::Drawing::Point(169, 35);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(112, 17);
			this->bunifuCustomLabel4->TabIndex = 20;
			this->bunifuCustomLabel4->Text = L"My Order Item";
			// 
			// myorder_item
			// 
			this->myorder_item->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->myorder_item->FormattingEnabled = true;
			this->myorder_item->Location = System::Drawing::Point(153, 56);
			this->myorder_item->Name = L"myorder_item";
			this->myorder_item->Size = System::Drawing::Size(144, 21);
			this->myorder_item->TabIndex = 19;
			// 
			// myorder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 315);
			this->Controls->Add(this->myorder_form);
			this->Name = L"myorder";
			this->Text = L"myorder";
			this->Load += gcnew System::EventHandler(this, &myorder::myorder_Load);
			this->myorder_form->ResumeLayout(false);
			this->myorder_form->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void myorder_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void done_myorder_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	/*makeorder f;
	this->Hide();
	f.ShowDialog();
	this->Close();*/
}
};
}
