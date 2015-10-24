#pragma once
#include <cliext/vector>


namespace Proyecto02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using cliext::vector;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:		
		vector<int> fila0;
		vector<int> fila1;
		vector<int> fila2;
		vector<int> fila3;
		vector<int> fila4;
		int i,j,k,turno,linea,enc,ganador,cont,band;
	private: System::Windows::Forms::ToolStripMenuItem^  instruccionesToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::Label^  label1;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  autoresToolStripMenuItem;
			 int slope();
		int corrimiento(int,int,int);
		void finjuego(int);

	public:	System::ComponentModel::ComponentResourceManager^  recursos;

	public: System::Windows::Forms::PictureBox^  pictureBox30;
	public: System::Windows::Forms::PictureBox^  pictureBox29;
	public: System::Windows::Forms::PictureBox^  pictureBox28;
	public: System::Windows::Forms::PictureBox^  pictureBox27;
	public: System::Windows::Forms::PictureBox^  pictureBox26;
	public: System::Windows::Forms::PictureBox^  pictureBox25;
	public: System::Windows::Forms::PictureBox^  pictureBox24;
	public: System::Windows::Forms::PictureBox^  pictureBox23;
	public: System::Windows::Forms::PictureBox^  pictureBox22;
	public: System::Windows::Forms::PictureBox^  pictureBox21;
	public: System::Windows::Forms::PictureBox^  pictureBox20;
	public: System::Windows::Forms::PictureBox^  pictureBox19;
	public: System::Windows::Forms::PictureBox^  pictureBox18;
	public: System::Windows::Forms::PictureBox^  pictureBox17;
	public: System::Windows::Forms::PictureBox^  pictureBox16;
	public: System::Windows::Forms::PictureBox^  pictureBox15;
	public: System::Windows::Forms::PictureBox^  pictureBox14;
	public: System::Windows::Forms::PictureBox^  pictureBox13;
	public: System::Windows::Forms::PictureBox^  pictureBox12;
	public: System::Windows::Forms::PictureBox^  pictureBox11;
	public: System::Windows::Forms::PictureBox^  pictureBox10;
	public: System::Windows::Forms::PictureBox^  pictureBox9;
	public: System::Windows::Forms::PictureBox^  pictureBox8;
	public: System::Windows::Forms::PictureBox^  pictureBox7;
	public: System::Windows::Forms::PictureBox^  pictureBox6;
	public: System::Windows::Forms::PictureBox^  pictureBox5;
	public: System::Windows::Forms::PictureBox^  pictureBox4;
	public: System::Windows::Forms::PictureBox^  pictureBox3;
	public: System::Windows::Forms::PictureBox^  pictureBox2;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	

	public: 
		Form1(void)
		{
			InitializeComponent();
			//TODO: agregar código de constructor aquí			
			fila0.resize(5);
			fila1.resize(5);
			fila2.resize(5);
			fila3.resize(5);
			fila4.resize(5);
			turno=1;
			linea=0;
			enc=0;
			ganador=0;
			k=0;
			cont=0;
			band=0;
			for(i=0;i<3;i++)
			{
				j=3;
				fila0[k]=j;
				j++;
				fila1[k]=j;
				j--;
				fila2[k]=j;
				j++;
				fila3[k]=j;
				j--;
				fila4[k]=j;
				k=k+2;
			}
			k=1;
			for(i=1;i<3;i++)
			{
				j=4;
				fila0[k]=j;
				j--;
				fila1[k]=j;
				j++;
				fila2[k]=j;
				j--;
				fila3[k]=j;
				j++;
				fila4[k]=j;
				k=k+2;
			}
			recursos = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		}
	
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  acercaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nuevoJuegoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>

		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoJuegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instruccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox30);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox29);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox28);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox27);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox26);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox25);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox24);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox23);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox22);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox21);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox20);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox19);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox18);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox17);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox16);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox15);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox14);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox13);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox12);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox11);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox10);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox9);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox8);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox7);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox6);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox5);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox4);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox3);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox2);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::White;
			this->splitContainer1->Panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"splitContainer1.Panel2.BackgroundImage")));
			this->splitContainer1->Panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox31);
			this->splitContainer1->Panel2->Controls->Add(this->menuStrip1);
			this->splitContainer1->Size = System::Drawing::Size(654, 482);
			this->splitContainer1->SplitterDistance = 402;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(320, 400);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(80, 80);
			this->pictureBox30->TabIndex = 29;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(240, 400);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(80, 80);
			this->pictureBox29->TabIndex = 28;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(160, 400);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(80, 80);
			this->pictureBox28->TabIndex = 27;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(80, 400);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(80, 80);
			this->pictureBox27->TabIndex = 26;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(0, 400);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(80, 80);
			this->pictureBox26->TabIndex = 25;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(320, 320);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(80, 80);
			this->pictureBox25->TabIndex = 24;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &Form1::pictureBox25_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(240, 320);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(80, 80);
			this->pictureBox24->TabIndex = 23;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &Form1::pictureBox24_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(160, 320);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(80, 80);
			this->pictureBox23->TabIndex = 22;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &Form1::pictureBox23_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(80, 320);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(80, 80);
			this->pictureBox22->TabIndex = 21;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &Form1::pictureBox22_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(0, 320);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(80, 80);
			this->pictureBox21->TabIndex = 20;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Form1::pictureBox21_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(320, 240);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(80, 80);
			this->pictureBox20->TabIndex = 19;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &Form1::pictureBox20_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(240, 240);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(80, 80);
			this->pictureBox19->TabIndex = 18;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &Form1::pictureBox19_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(160, 240);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(80, 80);
			this->pictureBox18->TabIndex = 17;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &Form1::pictureBox18_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(80, 240);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(80, 80);
			this->pictureBox17->TabIndex = 16;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Form1::pictureBox17_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(0, 240);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(80, 80);
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Form1::pictureBox16_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(320, 160);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(80, 80);
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Form1::pictureBox15_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(240, 160);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(80, 80);
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Form1::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(160, 160);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(80, 80);
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Form1::pictureBox13_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(80, 160);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(80, 80);
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Form1::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(0, 160);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(80, 80);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form1::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(320, 80);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(80, 80);
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(240, 80);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(80, 80);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(160, 80);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(80, 80);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(80, 80);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(80, 80);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 80);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 80);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(320, 0);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(80, 80);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(240, 0);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 80);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(160, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(80, 80);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(80, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 80);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Turno de la bola =";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(156, 27);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(80, 80);
			this->pictureBox31->TabIndex = 1;
			this->pictureBox31->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem1, 
				this->acercaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(248, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->nuevoJuegoToolStripMenuItem, 
				this->salirToolStripMenuItem});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(50, 20);
			this->toolStripMenuItem1->Text = L"Juego";
			// 
			// nuevoJuegoToolStripMenuItem
			// 
			this->nuevoJuegoToolStripMenuItem->Name = L"nuevoJuegoToolStripMenuItem";
			this->nuevoJuegoToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->nuevoJuegoToolStripMenuItem->Text = L"Nuevo Juego";
			this->nuevoJuegoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nuevoJuegoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem_Click);
			// 
			// acercaToolStripMenuItem
			// 
			this->acercaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->instruccionesToolStripMenuItem, 
				this->autoresToolStripMenuItem});
			this->acercaToolStripMenuItem->Name = L"acercaToolStripMenuItem";
			this->acercaToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->acercaToolStripMenuItem->Text = L"Acerca";
			// 
			// instruccionesToolStripMenuItem
			// 
			this->instruccionesToolStripMenuItem->Name = L"instruccionesToolStripMenuItem";
			this->instruccionesToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->instruccionesToolStripMenuItem->Text = L"Instrucciones";
			this->instruccionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::instruccionesToolStripMenuItem_Click);
			// 
			// autoresToolStripMenuItem
			// 
			this->autoresToolStripMenuItem->Name = L"autoresToolStripMenuItem";
			this->autoresToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->autoresToolStripMenuItem->Text = L"Autores";
			this->autoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autoresToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 482);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Slope";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {			 
			 
			 //llenado de vectores
			 if(fila0[0]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila0[0]=1;
					turno=2;
				 }
				 else
				 {
					fila0[0]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }	 

			 if(band)
			 {
					corrimiento(0,0,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila0[i]==1)
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila0[i]==1)
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila0[i]==1)
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila0[i]==1)
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila0[i]==1)
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }
			 
			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila1[0]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila1[0]=1;
					turno=2;
				 }
				 else
				 {
					fila1[0]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }			 

			 if(band)
			 {
					corrimiento(1,0,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila1[i]==1)
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila1[i]==1)
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila1[i]==1)
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila1[i]==1)
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila1[i]==1)
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);
			
			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila2[0]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila2[0]=1;
					turno=2;
				 }
				 else
				 {
					fila2[0]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(2,0,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila2[i]==1)
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila2[i]==1)
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila2[i]==1)
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila2[i]==1)
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila2[i]==1)
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila3[0]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila3[0]=1;
					turno=2;
				 }
				 else
				 {
					fila3[0]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(3,0,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila3[i]==1)
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila3[i]==1)
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila3[i]==1)
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila3[i]==1)
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila3[i]==1)
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila4[0]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila4[0]=1;
					turno=2;
				 }
				 else
				 {
					fila4[0]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(4,0,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila4[i]==1)
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila4[i]==1)
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila4[i]==1)
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila4[i]==1)
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila4[i]==1)
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila0[1]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila0[1]=1;
					turno=2;
				 }
				 else
				 {
					fila0[1]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(0,1,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila0[i]==1)
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila0[i]==1)
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila0[i]==1)
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila0[i]==1)
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila0[i]==1)
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila1[1]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila1[1]=1;
					turno=2;
				 }
				 else
				 {
					fila1[1]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(1,1,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila1[i]==1)
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila1[i]==1)
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila1[i]==1)
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila1[i]==1)
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila1[i]==1)
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila2[1]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila2[1]=1;
					turno=2;
				 }
				 else
				 {
					fila2[1]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(2,1,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila2[i]==1)
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila2[i]==1)
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila2[i]==1)
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila2[i]==1)
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila2[i]==1)
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila3[1]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila3[1]=1;
					turno=2;
				 }
				 else
				 {
					fila3[1]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(3,1,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila3[i]==1)
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila3[i]==1)
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila3[i]==1)
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila3[i]==1)
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila3[i]==1)
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila4[1]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila4[1]=1;
					turno=2;
				 }
				 else
				 {
					fila4[1]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(4,1,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila4[i]==1)
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila4[i]==1)
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila4[i]==1)
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila4[i]==1)
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila4[i]==1)
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila0[2]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila0[2]=1;
					turno=2;
				 }
				 else
				 {
					fila0[2]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(0,2,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila0[i]==1)
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila0[i]==1)
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila0[i]==1)
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila0[i]==1)
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila0[i]==1)
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila1[2]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila1[2]=1;
					turno=2;
				 }
				 else
				 {
					fila1[2]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(1,2,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila1[i]==1)
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila1[i]==1)
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila1[i]==1)
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila1[i]==1)
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila1[i]==1)
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila2[2]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila2[2]=1;
					turno=2;
				 }
				 else
				 {
					fila2[2]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(2,2,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila2[i]==1)
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila2[i]==1)
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila2[i]==1)
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila2[i]==1)
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila2[i]==1)
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila3[2]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila3[2]=1;
					turno=2;
				 }
				 else
				 {
					fila3[2]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(3,2,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila3[i]==1)
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila3[i]==1)
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila3[i]==1)
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila3[i]==1)
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila3[i]==1)
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila4[2]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila4[2]=1;
					turno=2;
				 }
				 else
				 {
					fila4[2]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(4,2,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila4[i]==1)
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila4[i]==1)
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila4[i]==1)
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila4[i]==1)
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila4[i]==1)
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila0[3]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila0[3]=1;
					turno=2;
				 }
				 else
				 {
					fila0[3]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(0,3,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila0[i]==1)
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila0[i]==1)
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila0[i]==1)
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila0[i]==1)
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila0[i]==1)
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila1[3]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila1[3]=1;
					turno=2;
				 }
				 else
				 {
					fila1[3]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(1,3,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila1[i]==1)
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila1[i]==1)
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila1[i]==1)
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila1[i]==1)
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila1[i]==1)
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila2[3]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila2[3]=1;
					turno=2;
				 }
				 else
				 {
					fila2[3]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(2,3,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila2[i]==1)
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila2[i]==1)
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila2[i]==1)
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila2[i]==1)
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila2[i]==1)
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila3[3]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila3[3]=1;
					turno=2;
				 }
				 else
				 {
					fila3[3]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(3,3,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila3[i]==1)
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila3[i]==1)
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila3[i]==1)
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila3[i]==1)
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila3[i]==1)
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila4[3]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila4[3]=1;
					turno=2;
				 }
				 else
				 {
					fila4[3]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(cont==25)
			 {
					corrimiento(4,3,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila4[i]==1)
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila4[i]==1)
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila4[i]==1)
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila4[i]==1)
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila4[i]==1)
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila0[4]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila0[4]=1;
					turno=2;
				 }
				 else
				 {
					fila0[4]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(0,4,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila0[i]==1)
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila0[i]==1)
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila0[i]==1)
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila0[i]==1)
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila0[i]==1)
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila1[4]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila1[4]=1;
					turno=2;
				 }
				 else
				 {
					fila1[4]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }
			 
			 if(band)
			 {
					corrimiento(1,4,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila1[i]==1)
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila1[i]==1)
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila1[i]==1)
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila1[i]==1)
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila1[i]==1)
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila2[4]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila2[4]=1;
					turno=2;
				 }
				 else
				 {
					fila2[4]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(2,4,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila2[i]==1)
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila2[i]==1)
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila2[i]==1)
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila2[i]==1)
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila2[i]==1)
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila3[4]==4)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila3[4]=1;
					turno=2;
				 }
				 else
				 {
					fila3[4]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
				 else
					this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(3,4,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila3[i]==1)
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==1)
						{
							if(fila3[i]==1)
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==2)
						{
							if(fila3[i]==1)
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==3)
						{
							if(fila3[i]==1)
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==4)
						{
							if(fila3[i]==1)
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
			 //llenado de vectores
			 if(fila4[4]==3)
			 {
				 cont++;
				 if(turno==1)
				 {
					fila4[4]=1;
					turno=2;
				 }
				 else
				 {
					fila4[4]=2;
					turno=1;
				 }
				 //colocacion de la ficha
				 if(turno==2)
					this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
				 else
					this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
			 }

			 if(band)
			 {
					corrimiento(4,4,turno);
					i=0;
					while(i<5)
					{
						if(i==0)
						{
							if(fila4[i]==1)
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==1)
						{
							if(fila4[i]==1)
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==2)
						{
							if(fila4[i]==1)
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}

						if(i==3)
						{
							if(fila4[i]==1)
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
							else
								this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));
						}

						if(i==4)
						{
							if(fila4[i]==1)
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_azul")));
							else
								this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_bola_roja")));
						}
						i++;
					}
					if(turno==1)
						turno=2;
					else
						turno=1;
			 }

			 if(cont==25)
				 band=1;

			 linea=0;
			 linea=slope();

			 if(linea!=0)
				 finjuego(linea);

			 if(turno==1)
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));
			 else
				this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_roja")));

		 }

private: System::Void nuevoJuegoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	turno=1;
	linea=0;
	enc=0;
	ganador=0;
	k=0;
	cont=0;
	band=0;
	for(i=0;i<3;i++)
	{
		j=3;
		fila0[k]=j;
		j++;
		fila1[k]=j;
		j--;
		fila2[k]=j;
		j++;
		fila3[k]=j;
		j--;
		fila4[k]=j;
		k=k+2;
	}
	k=1;
	for(i=1;i<3;i++)
	{
		j=4;
		fila0[k]=j;
		j--;
		fila1[k]=j;
		j++;
		fila2[k]=j;
		j--;
		fila3[k]=j;
		j++;
		fila4[k]=j;
		k=k+2;
	}

	this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_bola_azul")));

		 }
private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void instruccionesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("El objetivo en este juego es conseguir cinco piezas en raya de tu color (Diagonales, Verticales u Horizontales). Una vez completado el tablero con las fichas de color Azul y Rojo podrás realizar movimientos sobre las fichas del tablero (cualquier color) para conseguir las cinco en raya. Los movimientos a realizar una vez que el tablero esta completo sólo permiten un desplazamiento de las fichas en dirección hacia abajo por las líneas verticales.","Slope", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		 }
private: System::Void autoresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Noel Hernandez y Jose Peña. \nUniversidad Nacional Experimental del Tachira. \nIngenieria en Informatica.","Slope", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		 }
};

void Form1::finjuego(int ganador)
{
	if(ganador==1)
		MessageBox::Show("Felicidades Jugador 1","Slope", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	else
		MessageBox::Show("Felicidades Jugador 2","Slope", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);

	turno=1;
	linea=0;
	enc=0;
	ganador=0;
	k=0;
	cont=0;
	band=0;
	for(i=0;i<3;i++)
	{
		j=3;
		fila0[k]=j;
		j++;
		fila1[k]=j;
		j--;
		fila2[k]=j;
		j++;
		fila3[k]=j;
		j--;
		fila4[k]=j;
		k=k+2;
	}
	k=1;
	for(i=1;i<3;i++)
	{
		j=4;
		fila0[k]=j;
		j--;
		fila1[k]=j;
		j++;
		fila2[k]=j;
		j--;
		fila3[k]=j;
		j++;
		fila4[k]=j;
		k=k+2;
	}

	this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"blanco_vacio")));
	this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"negro_vacio")));
	this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
	this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_vacio")));
}

int Form1::slope()
{
	ganador=0;
	enc=0;
	i=0;
	while(i<5 && enc==0)
	{
		if(fila0[i]==1 && fila1[i]==1 && fila2[i]==1 && fila3[i]==1 && fila4[i]==1)
		{
			enc=1;
			ganador=fila0[i];
		}
		else
		if(fila0[i]==2 && fila1[i]==2 && fila2[i]==2 && fila3[i]==2 && fila4[i]==2)
		{
			enc=1;
			ganador=fila0[i];
		}
		i++;
	}

	if(fila0[0]==1 && fila0[1]==1 && fila0[2]==1 && fila0[3]==1 && fila0[4]==1)
		ganador=fila0[0];
	else
	if(fila0[0]==2 && fila0[1]==2 && fila0[2]==2 && fila0[3]==2 && fila0[4]==2)
		ganador=fila0[0];
	else
	if(fila1[0]==1 && fila1[1]==1 && fila1[2]==1 && fila1[3]==1 && fila1[4]==1)
		ganador=fila1[0];
	else
	if(fila1[0]==2 && fila1[1]==2 && fila1[2]==2 && fila1[3]==2 && fila1[4]==2)
		ganador=fila1[0];
	else
	if(fila2[0]==1 && fila2[1]==1 && fila2[2]==1 && fila2[3]==1 && fila2[4]==1)
		ganador=fila2[0];
	else
	if(fila2[0]==2 && fila2[1]==2 && fila2[2]==2 && fila2[3]==2 && fila2[4]==2)
		ganador=fila2[0];
	else
	if(fila3[0]==1 && fila3[1]==1 && fila3[2]==1 && fila3[3]==1 && fila3[4]==1)
		ganador=fila3[0];
	else
	if(fila3[0]==2 && fila3[1]==2 && fila3[2]==2 && fila3[3]==2 && fila3[4]==2)
		ganador=fila3[0];
	else
	if(fila4[0]==1 && fila4[1]==1 && fila4[2]==1 && fila4[3]==1 && fila4[4]==1)
		ganador=fila4[0];
	else
	if(fila4[0]==2 && fila4[1]==2 && fila4[2]==2 && fila4[3]==2 && fila4[4]==2)
		ganador=fila4[0];
	else
	if(fila0[0]==1 && fila1[1]==1 && fila2[2]==1 && fila3[3]==1 && fila4[4]==1)
		ganador=fila0[0];
	else
	if(fila0[4]==1 && fila1[3]==1 && fila2[2]==1 && fila3[1]==1 && fila4[0]==1)
		ganador=fila0[4];
	else
	if(fila0[0]==2 && fila1[1]==2 && fila2[2]==2 && fila3[3]==2 && fila4[4]==2)
		ganador=fila0[0];
	else
	if(fila0[4]==2 && fila1[3]==2 && fila2[2]==2 && fila3[1]==2 && fila4[0]==2)
		ganador=fila0[4];

	return ganador;
}

int Form1::corrimiento(int fila, int pos, int turno)
{
	vector<int> vecaux;
	vecaux.resize(0);	
	
	if(fila==0)
	{
		i=0;
		while(i<5)
		{
			vecaux.push_back(fila0[i]);
			i++;
		}

		i=pos;
		fila0[i]=turno;
		while(i<5)
		{
			i++;
			if(i<5)
				fila0[i]=vecaux[i-1];
		}

		if(vecaux[4]==1)
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_azul")));
		else
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_roja")));

	}

	if(fila==1)
	{
		i=0;
		while(i<5)
		{
			vecaux.push_back(fila1[i]);
			i++;
		}

		i=pos;
		fila1[i]=turno;
		while(i<5)
		{
			i++;
			if(i<5)
				fila1[i]=vecaux[i-1];
		}

		if(vecaux[4]==1)
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_azul")));
		else
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_roja")));

	}

	if(fila==2)
	{
		i=0;
		while(i<5)
		{
			vecaux.push_back(fila2[i]);
			i++;
		}

		i=pos;
		fila2[i]=turno;
		while(i<5)
		{
			i++;
			if(i<5)
				fila2[i]=vecaux[i-1];
		}

		if(vecaux[4]==1)
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_azul")));
		else
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_roja")));

	}

	if(fila==3)
	{
		i=0;
		while(i<5)
		{
			vecaux.push_back(fila3[i]);
			i++;
		}

		i=pos;
		fila3[i]=turno;
		while(i<5)
		{
			i++;
			if(i<5)
				fila3[i]=vecaux[i-1];
		}

		if(vecaux[4]==1)
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_azul")));
		else
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_roja")));

	}

	if(fila==4)
	{
		i=0;
		while(i<5)
		{
			vecaux.push_back(fila4[i]);
			i++;
		}

		i=pos;
		fila4[i]=turno;
		while(i<5)
		{
			i++;
			if(i<5)
				fila4[i]=vecaux[i-1];
		}

		if(vecaux[4]==1)
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_azul")));
		else
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(recursos->GetObject(L"slope_bola_roja")));

	}
	return 0;
}

}