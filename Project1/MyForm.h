#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ task_control;
	protected:

	private: System::Windows::Forms::TabPage^ task_tab;
	private: System::Windows::Forms::TabPage^ answer_tab;
	private: System::Windows::Forms::GroupBox^ data_groupbox;

	private: System::Windows::Forms::Label^ intensity_label;
	private: System::Windows::Forms::Label^ average_call_time_label;
	private: System::Windows::Forms::GroupBox^ find_groupbox;
	private: System::Windows::Forms::Label^ ultimate_absolute_throughput;

	private: System::Windows::Forms::Label^ ultimate_relative_throughput_label;
	private: System::Windows::Forms::Label^ failure_probability_label;
	private: System::Windows::Forms::Label^ number_of_requests_served_label;
	private: System::Windows::Forms::Label^ number_of_unserved_requests_label;
	private: System::Windows::Forms::GroupBox^ solution_groupbox;
	private: System::Windows::Forms::PictureBox^ task_picturebox;
	private: System::Windows::Forms::Label^ service_flow_intensity_label;
	private: System::Windows::Forms::Button^ solution_button;
	private: System::Windows::Forms::Label^ relative_throughput_label;
	private: System::Windows::Forms::Label^ absolute_throughput_label;
	private: System::Windows::Forms::Label^ channel_occupancy_probability_label;
	private: System::Windows::Forms::Label^ requests_unserved_label;
	private: System::Windows::Forms::Label^ requests_served_label;
	private: System::Windows::Forms::Label^ rated_wsc_capacity_label;
	private: System::Windows::Forms::Label^ actual_wsc_capacity_label;
	private: System::Windows::Forms::NumericUpDown^ average_call_time_numericupdown;

	private: System::Windows::Forms::NumericUpDown^ intensity_numericupdown;


















	protected:





	protected:

	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->task_control = (gcnew System::Windows::Forms::TabControl());
			this->task_tab = (gcnew System::Windows::Forms::TabPage());
			this->task_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->answer_tab = (gcnew System::Windows::Forms::TabPage());
			this->solution_button = (gcnew System::Windows::Forms::Button());
			this->solution_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->actual_wsc_capacity_label = (gcnew System::Windows::Forms::Label());
			this->rated_wsc_capacity_label = (gcnew System::Windows::Forms::Label());
			this->requests_served_label = (gcnew System::Windows::Forms::Label());
			this->requests_unserved_label = (gcnew System::Windows::Forms::Label());
			this->channel_occupancy_probability_label = (gcnew System::Windows::Forms::Label());
			this->absolute_throughput_label = (gcnew System::Windows::Forms::Label());
			this->relative_throughput_label = (gcnew System::Windows::Forms::Label());
			this->service_flow_intensity_label = (gcnew System::Windows::Forms::Label());
			this->find_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->number_of_unserved_requests_label = (gcnew System::Windows::Forms::Label());
			this->number_of_requests_served_label = (gcnew System::Windows::Forms::Label());
			this->failure_probability_label = (gcnew System::Windows::Forms::Label());
			this->ultimate_absolute_throughput = (gcnew System::Windows::Forms::Label());
			this->ultimate_relative_throughput_label = (gcnew System::Windows::Forms::Label());
			this->data_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->average_call_time_numericupdown = (gcnew System::Windows::Forms::NumericUpDown());
			this->intensity_numericupdown = (gcnew System::Windows::Forms::NumericUpDown());
			this->average_call_time_label = (gcnew System::Windows::Forms::Label());
			this->intensity_label = (gcnew System::Windows::Forms::Label());
			this->task_control->SuspendLayout();
			this->task_tab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->task_picturebox))->BeginInit();
			this->answer_tab->SuspendLayout();
			this->solution_groupbox->SuspendLayout();
			this->find_groupbox->SuspendLayout();
			this->data_groupbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->average_call_time_numericupdown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intensity_numericupdown))->BeginInit();
			this->SuspendLayout();
			// 
			// task_control
			// 
			this->task_control->Controls->Add(this->task_tab);
			this->task_control->Controls->Add(this->answer_tab);
			resources->ApplyResources(this->task_control, L"task_control");
			this->task_control->Name = L"task_control";
			this->task_control->SelectedIndex = 0;
			// 
			// task_tab
			// 
			this->task_tab->Controls->Add(this->task_picturebox);
			resources->ApplyResources(this->task_tab, L"task_tab");
			this->task_tab->Name = L"task_tab";
			this->task_tab->UseVisualStyleBackColor = true;
			// 
			// task_picturebox
			// 
			resources->ApplyResources(this->task_picturebox, L"task_picturebox");
			this->task_picturebox->Name = L"task_picturebox";
			this->task_picturebox->TabStop = false;
			// 
			// answer_tab
			// 
			this->answer_tab->Controls->Add(this->solution_button);
			this->answer_tab->Controls->Add(this->solution_groupbox);
			this->answer_tab->Controls->Add(this->find_groupbox);
			this->answer_tab->Controls->Add(this->data_groupbox);
			resources->ApplyResources(this->answer_tab, L"answer_tab");
			this->answer_tab->Name = L"answer_tab";
			this->answer_tab->UseVisualStyleBackColor = true;
			// 
			// solution_button
			// 
			resources->ApplyResources(this->solution_button, L"solution_button");
			this->solution_button->Name = L"solution_button";
			this->solution_button->UseVisualStyleBackColor = true;
			this->solution_button->Click += gcnew System::EventHandler(this, &MyForm::solution_button_Click);
			// 
			// solution_groupbox
			// 
			this->solution_groupbox->Controls->Add(this->actual_wsc_capacity_label);
			this->solution_groupbox->Controls->Add(this->rated_wsc_capacity_label);
			this->solution_groupbox->Controls->Add(this->requests_served_label);
			this->solution_groupbox->Controls->Add(this->requests_unserved_label);
			this->solution_groupbox->Controls->Add(this->channel_occupancy_probability_label);
			this->solution_groupbox->Controls->Add(this->absolute_throughput_label);
			this->solution_groupbox->Controls->Add(this->relative_throughput_label);
			this->solution_groupbox->Controls->Add(this->service_flow_intensity_label);
			resources->ApplyResources(this->solution_groupbox, L"solution_groupbox");
			this->solution_groupbox->Name = L"solution_groupbox";
			this->solution_groupbox->TabStop = false;
			// 
			// actual_wsc_capacity_label
			// 
			resources->ApplyResources(this->actual_wsc_capacity_label, L"actual_wsc_capacity_label");
			this->actual_wsc_capacity_label->Name = L"actual_wsc_capacity_label";
			// 
			// rated_wsc_capacity_label
			// 
			resources->ApplyResources(this->rated_wsc_capacity_label, L"rated_wsc_capacity_label");
			this->rated_wsc_capacity_label->Name = L"rated_wsc_capacity_label";
			// 
			// requests_served_label
			// 
			resources->ApplyResources(this->requests_served_label, L"requests_served_label");
			this->requests_served_label->Name = L"requests_served_label";
			// 
			// requests_unserved_label
			// 
			resources->ApplyResources(this->requests_unserved_label, L"requests_unserved_label");
			this->requests_unserved_label->Name = L"requests_unserved_label";
			// 
			// channel_occupancy_probability_label
			// 
			resources->ApplyResources(this->channel_occupancy_probability_label, L"channel_occupancy_probability_label");
			this->channel_occupancy_probability_label->Name = L"channel_occupancy_probability_label";
			// 
			// absolute_throughput_label
			// 
			resources->ApplyResources(this->absolute_throughput_label, L"absolute_throughput_label");
			this->absolute_throughput_label->Name = L"absolute_throughput_label";
			// 
			// relative_throughput_label
			// 
			resources->ApplyResources(this->relative_throughput_label, L"relative_throughput_label");
			this->relative_throughput_label->Name = L"relative_throughput_label";
			// 
			// service_flow_intensity_label
			// 
			resources->ApplyResources(this->service_flow_intensity_label, L"service_flow_intensity_label");
			this->service_flow_intensity_label->Name = L"service_flow_intensity_label";
			// 
			// find_groupbox
			// 
			this->find_groupbox->Controls->Add(this->number_of_unserved_requests_label);
			this->find_groupbox->Controls->Add(this->number_of_requests_served_label);
			this->find_groupbox->Controls->Add(this->failure_probability_label);
			this->find_groupbox->Controls->Add(this->ultimate_absolute_throughput);
			this->find_groupbox->Controls->Add(this->ultimate_relative_throughput_label);
			resources->ApplyResources(this->find_groupbox, L"find_groupbox");
			this->find_groupbox->Name = L"find_groupbox";
			this->find_groupbox->TabStop = false;
			// 
			// number_of_unserved_requests_label
			// 
			resources->ApplyResources(this->number_of_unserved_requests_label, L"number_of_unserved_requests_label");
			this->number_of_unserved_requests_label->Name = L"number_of_unserved_requests_label";
			// 
			// number_of_requests_served_label
			// 
			resources->ApplyResources(this->number_of_requests_served_label, L"number_of_requests_served_label");
			this->number_of_requests_served_label->Name = L"number_of_requests_served_label";
			// 
			// failure_probability_label
			// 
			resources->ApplyResources(this->failure_probability_label, L"failure_probability_label");
			this->failure_probability_label->Name = L"failure_probability_label";
			// 
			// ultimate_absolute_throughput
			// 
			resources->ApplyResources(this->ultimate_absolute_throughput, L"ultimate_absolute_throughput");
			this->ultimate_absolute_throughput->Name = L"ultimate_absolute_throughput";
			// 
			// ultimate_relative_throughput_label
			// 
			resources->ApplyResources(this->ultimate_relative_throughput_label, L"ultimate_relative_throughput_label");
			this->ultimate_relative_throughput_label->Name = L"ultimate_relative_throughput_label";
			// 
			// data_groupbox
			// 
			this->data_groupbox->Controls->Add(this->average_call_time_numericupdown);
			this->data_groupbox->Controls->Add(this->intensity_numericupdown);
			this->data_groupbox->Controls->Add(this->average_call_time_label);
			this->data_groupbox->Controls->Add(this->intensity_label);
			resources->ApplyResources(this->data_groupbox, L"data_groupbox");
			this->data_groupbox->Name = L"data_groupbox";
			this->data_groupbox->TabStop = false;
			// 
			// average_call_time_numericupdown
			// 
			this->average_call_time_numericupdown->DecimalPlaces = 1;
			this->average_call_time_numericupdown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			resources->ApplyResources(this->average_call_time_numericupdown, L"average_call_time_numericupdown");
			this->average_call_time_numericupdown->Name = L"average_call_time_numericupdown";
			this->average_call_time_numericupdown->ValueChanged += gcnew System::EventHandler(this, &MyForm::average_call_time_numericupdown_ValueChanged);
			// 
			// intensity_numericupdown
			// 
			this->intensity_numericupdown->DecimalPlaces = 1;
			this->intensity_numericupdown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			resources->ApplyResources(this->intensity_numericupdown, L"intensity_numericupdown");
			this->intensity_numericupdown->Name = L"intensity_numericupdown";
			// 
			// average_call_time_label
			// 
			resources->ApplyResources(this->average_call_time_label, L"average_call_time_label");
			this->average_call_time_label->Name = L"average_call_time_label";
			// 
			// intensity_label
			// 
			resources->ApplyResources(this->intensity_label, L"intensity_label");
			this->intensity_label->Name = L"intensity_label";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->Controls->Add(this->task_control);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->task_control->ResumeLayout(false);
			this->task_tab->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->task_picturebox))->EndInit();
			this->answer_tab->ResumeLayout(false);
			this->solution_groupbox->ResumeLayout(false);
			this->solution_groupbox->PerformLayout();
			this->find_groupbox->ResumeLayout(false);
			this->find_groupbox->PerformLayout();
			this->data_groupbox->ResumeLayout(false);
			this->data_groupbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->average_call_time_numericupdown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intensity_numericupdown))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void solution_button_Click(System::Object^ sender, System::EventArgs^ e) {
			double intensity = System::Convert::ToDouble(intensity_numericupdown->Value); /* интенсивность вызовов */
			double average_call_time = System::Convert::ToDouble(average_call_time_numericupdown->Value); /* средняя продолжительность обслуживания */

			double service_flow_intensity = Math::Round(1 / average_call_time, 2); /* интенсивность потока обслуживания */
			double relative_throughput = Math::Round(service_flow_intensity / (intensity + service_flow_intensity), 2); /* относительная пропускная способность */
			double absolute_throughput = Math::Round(intensity * relative_throughput, 2); /* абсолютная пропускная способность */
			double channel_occupancy_probability = Math::Round(1 - relative_throughput, 2); /* вероятность занятости канала */
			double number_of_requests_served = Math::Round(absolute_throughput * 60, 2); /* число обслуженных заявок */
			double number_of_requests_unserved = Math::Round(intensity * channel_occupancy_probability * 60, 2); /* число необслуженных заявок */
			double rated_wsc_capacity = Math::Round(60 / average_call_time, 2); /* номинальная производительность СМО */
			double actual_wsc_capacity =  Math::Round(100 - (number_of_requests_served / rated_wsc_capacity * 100), 2); /* фактическая производительность СМО */

			service_flow_intensity_label->Text = "Интенсивность потока обслуживания: " + service_flow_intensity + " заявок в мин.";
			relative_throughput_label->Text = "Относительная пропускная способность: " + relative_throughput;
			absolute_throughput_label->Text = "Абсолютная пропускная способность: " + absolute_throughput;
			channel_occupancy_probability_label->Text = "Вероятность занятости канала: " + channel_occupancy_probability + " (" + channel_occupancy_probability * 100 + "%)";
			requests_served_label->Text = "Число обслуженных заявок: " + number_of_requests_served;
			requests_unserved_label->Text = "Число необслуженных заявок: " + number_of_requests_unserved;
			rated_wsc_capacity_label->Text = "Номинальная производительность СМО: " + rated_wsc_capacity + " заявки в час";
			actual_wsc_capacity_label->Text = "Фактическая производительность СМО: " + actual_wsc_capacity + "%";
		}

		private: System::Void average_call_time_numericupdown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			if (intensity_numericupdown->Value > 0 && average_call_time_numericupdown->Value > 0)
			{
				solution_button->Enabled = true;
			}
			else {
				solution_button->Enabled = false;
			}
		}
	};
}
