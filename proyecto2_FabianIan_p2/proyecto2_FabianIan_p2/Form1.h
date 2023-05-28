#include"Granjero.h"
#include"VentanaMercado.h"

#include "ArbolBinarioOrdenado.h"
#include "ArbolBinarioOrdenadoAtacadoArbol.h"
#include "ArbolBinarioOrdenadoAtacadoFrutoCuervo.h"
#include "ArbolBinarioOrdenadoAtacadoFrutoOveja.h"
#include "ArbolBinarioOrdenadoCrecer.h"
#include "ArbolBinarioOrdenadoFrutos.h"

namespace CppCLRWinFormsProject {
	//proyecto2_FabianIan_p2
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			initImages();
			//inicianHilos();
			//
			//TODO: Add the constructor code here
			//
		}
		void cambImageGranjero(int num) {
			switch (num)
			{
			case 11:
				this->pb_granjero11->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 12:
				this->pb_granjero12->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 13:
				this->pb_granjero13->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 14:
				this->pb_granjero14->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 15:
				this->pb_granjero15->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 16:
				this->pb_granjero16->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 17:
				this->pb_granjero17->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 21:
				this->pb_granjero21->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 22:
				this->pb_granjero22->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 23:
				this->pb_granjero23->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 24:
				this->pb_granjero24->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 25:
				this->pb_granjero25->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 26:
				this->pb_granjero26->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 27:
				this->pb_granjero27->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 31:
				this->pb_granjero31->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 32:
				this->pb_granjero32->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 33:
				this->pb_granjero33->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 34:
				this->pb_granjero34->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 35:
				this->pb_granjero35->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 36:
				this->pb_granjero36->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 37:
				this->pb_granjero37->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 41:
				this->pb_granjero41->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 42:
				this->pb_granjero42->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 43:
				this->pb_granjero43->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 44:
				this->pb_granjero44->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 45:
				this->pb_granjero45->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 46:
				this->pb_granjero46->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 47:
				this->pb_granjero47->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 51:
				this->pb_granjero51->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 52:
				this->pb_granjero52->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 53:
				this->pb_granjero53->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 54:
				this->pb_granjero54->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 55:
				this->pb_granjero55->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 56:
				this->pb_granjero56->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 57:
				this->pb_granjero57->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 61:
				this->pb_granjero61->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 62:
				this->pb_granjero62->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 63:
				this->pb_granjero63->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 64:
				this->pb_granjero64->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 65:
				this->pb_granjero65->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 66:
				this->pb_granjero66->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 67:
				this->pb_granjero67->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 71:
				this->pb_granjero71->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 72:
				this->pb_granjero72->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 73:
				this->pb_granjero73->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 74:
				this->pb_granjero74->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 75:
				this->pb_granjero75->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 76:
				this->pb_granjero76->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			case 77:
				this->pb_granjero77->BackgroundImage = Image::FromFile("img//granjero.png");
				break;
			default:
				break;
			}
		}
		void cambImageGranjeroTransparente(int num) {
			switch (num)
			{
			case 11:
				this->pb_granjero11->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 12:
				this->pb_granjero12->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 13:
				this->pb_granjero13->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 14:
				this->pb_granjero14->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 15:
				this->pb_granjero15->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 16:
				this->pb_granjero16->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 17:
				this->pb_granjero17->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 21:
				this->pb_granjero21->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 22:
				this->pb_granjero22->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 23:
				this->pb_granjero23->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 24:
				this->pb_granjero24->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 25:
				this->pb_granjero25->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 26:
				this->pb_granjero26->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 27:
				this->pb_granjero27->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 31:
				this->pb_granjero31->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 32:
				this->pb_granjero32->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 33:
				this->pb_granjero33->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 34:
				this->pb_granjero34->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 35:
				this->pb_granjero35->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 36:
				this->pb_granjero36->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 37:
				this->pb_granjero37->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 41:
				this->pb_granjero41->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 42:
				this->pb_granjero42->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 43:
				this->pb_granjero43->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 44:
				this->pb_granjero44->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 45:
				this->pb_granjero45->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 46:
				this->pb_granjero46->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 47:
				this->pb_granjero47->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 51:
				this->pb_granjero51->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 52:
				this->pb_granjero52->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 53:
				this->pb_granjero53->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 54:
				this->pb_granjero54->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 55:
				this->pb_granjero55->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 56:
				this->pb_granjero56->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 57:
				this->pb_granjero57->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 61:
				this->pb_granjero61->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 62:
				this->pb_granjero62->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 63:
				this->pb_granjero63->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 64:
				this->pb_granjero64->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 65:
				this->pb_granjero65->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 66:
				this->pb_granjero66->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 67:
				this->pb_granjero67->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 71:
				this->pb_granjero71->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 72:
				this->pb_granjero72->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 73:
				this->pb_granjero73->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 74:
				this->pb_granjero74->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 75:
				this->pb_granjero75->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 76:
				this->pb_granjero76->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 77:
				this->pb_granjero77->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			default:
				break;
			}
		}
		void cambImageArbolABO(int num) {
			switch (num)
			{
			case 11:
				this->pb_arbol11->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 12:
				this->pb_arbol12->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 13:
				this->pb_arbol13->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 14:
				this->pb_arbol14->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 15:
				this->pb_arbol15->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 16:
				this->pb_arbol16->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 17:
				this->pb_arbol17->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 21:
				this->pb_arbol21->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 22:
				this->pb_arbol22->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 23:
				this->pb_arbol23->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 24:
				this->pb_arbol24->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 25:
				this->pb_arbol25->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 26:
				this->pb_arbol26->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 27:
				this->pb_arbol27->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 31:
				this->pb_arbol31->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 32:
				this->pb_arbol32->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 33:
				this->pb_arbol33->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 34:
				this->pb_arbol34->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 35:
				this->pb_arbol35->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 36:
				this->pb_arbol36->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 37:
				this->pb_arbol37->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 41:
				this->pb_arbol41->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 42:
				this->pb_arbol42->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 43:
				this->pb_arbol43->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 44:
				this->pb_arbol44->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 45:
				this->pb_arbol45->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 46:
				this->pb_arbol46->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 47:
				this->pb_arbol47->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 51:
				this->pb_arbol51->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 52:
				this->pb_arbol52->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 53:
				this->pb_arbol53->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 54:
				this->pb_arbol54->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 55:
				this->pb_arbol55->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 56:
				this->pb_arbol56->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 57:
				this->pb_arbol57->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 61:
				this->pb_arbol61->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 62:
				this->pb_arbol62->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 63:
				this->pb_arbol63->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 64:
				this->pb_arbol64->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 65:
				this->pb_arbol65->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 66:
				this->pb_arbol66->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 67:
				this->pb_arbol67->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 71:
				this->pb_arbol71->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 72:
				this->pb_arbol72->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 73:
				this->pb_arbol73->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 74:
				this->pb_arbol74->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 75:
				this->pb_arbol75->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 76:
				this->pb_arbol76->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			case 77:
				this->pb_arbol77->BackgroundImage = Image::FromFile("img//arbolManzana.png");
				break;
			default:
				break;
			}
		}
		void cambImageArbolAVL(int num) {
			switch (num)
			{
			case 11:
				this->pb_arbol11->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 12:
				this->pb_arbol12->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 13:
				this->pb_arbol13->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 14:
				this->pb_arbol14->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 15:
				this->pb_arbol15->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 16:
				this->pb_arbol16->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 17:
				this->pb_arbol17->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 21:
				this->pb_arbol21->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 22:
				this->pb_arbol22->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 23:
				this->pb_arbol23->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 24:
				this->pb_arbol24->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 25:
				this->pb_arbol25->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 26:
				this->pb_arbol26->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 27:
				this->pb_arbol27->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 31:
				this->pb_arbol31->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 32:
				this->pb_arbol32->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 33:
				this->pb_arbol33->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 34:
				this->pb_arbol34->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 35:
				this->pb_arbol35->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 36:
				this->pb_arbol36->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 37:
				this->pb_arbol37->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 41:
				this->pb_arbol41->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 42:
				this->pb_arbol42->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 43:
				this->pb_arbol43->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 44:
				this->pb_arbol44->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 45:
				this->pb_arbol45->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 46:
				this->pb_arbol46->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 47:
				this->pb_arbol47->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 51:
				this->pb_arbol51->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 52:
				this->pb_arbol52->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 53:
				this->pb_arbol53->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 54:
				this->pb_arbol54->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 55:
				this->pb_arbol55->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 56:
				this->pb_arbol56->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 57:
				this->pb_arbol57->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 61:
				this->pb_arbol61->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 62:
				this->pb_arbol62->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 63:
				this->pb_arbol63->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 64:
				this->pb_arbol64->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 65:
				this->pb_arbol65->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 66:
				this->pb_arbol66->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 67:
				this->pb_arbol67->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 71:
				this->pb_arbol71->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 72:
				this->pb_arbol72->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 73:
				this->pb_arbol73->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 74:
				this->pb_arbol74->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 75:
				this->pb_arbol75->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 76:
				this->pb_arbol76->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			case 77:
				this->pb_arbol77->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
				break;
			default:
				break;
			}
		}
		void cambImageArbolHEAP(int num) {
			switch (num)
			{
			case 11:
				this->pb_arbol11->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 12:
				this->pb_arbol12->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 13:
				this->pb_arbol13->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 14:
				this->pb_arbol14->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 15:
				this->pb_arbol15->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 16:
				this->pb_arbol16->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 17:
				this->pb_arbol17->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 21:
				this->pb_arbol21->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 22:
				this->pb_arbol22->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 23:
				this->pb_arbol23->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 24:
				this->pb_arbol24->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 25:
				this->pb_arbol25->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 26:
				this->pb_arbol26->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 27:
				this->pb_arbol27->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 31:
				this->pb_arbol31->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 32:
				this->pb_arbol32->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 33:
				this->pb_arbol33->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 34:
				this->pb_arbol34->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 35:
				this->pb_arbol35->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 36:
				this->pb_arbol36->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 37:
				this->pb_arbol37->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 41:
				this->pb_arbol41->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 42:
				this->pb_arbol42->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 43:
				this->pb_arbol43->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 44:
				this->pb_arbol44->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 45:
				this->pb_arbol45->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 46:
				this->pb_arbol46->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 47:
				this->pb_arbol47->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 51:
				this->pb_arbol51->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 52:
				this->pb_arbol52->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 53:
				this->pb_arbol53->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 54:
				this->pb_arbol54->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 55:
				this->pb_arbol55->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 56:
				this->pb_arbol56->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 57:
				this->pb_arbol57->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 61:
				this->pb_arbol61->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 62:
				this->pb_arbol62->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 63:
				this->pb_arbol63->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 64:
				this->pb_arbol64->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 65:
				this->pb_arbol65->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 66:
				this->pb_arbol66->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 67:
				this->pb_arbol67->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 71:
				this->pb_arbol71->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 72:
				this->pb_arbol72->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 73:
				this->pb_arbol73->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 74:
				this->pb_arbol74->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 75:
				this->pb_arbol75->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 76:
				this->pb_arbol76->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			case 77:
				this->pb_arbol77->BackgroundImage = Image::FromFile("img//arbolChiva.png");
				break;
			default:
				break;
			}
		}
		void cambImageArbolSPLAY(int num) {
			switch (num)
			{
			case 11:
				this->pb_arbol11->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 12:
				this->pb_arbol12->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 13:
				this->pb_arbol13->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 14:
				this->pb_arbol14->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 15:
				this->pb_arbol15->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 16:
				this->pb_arbol16->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 17:
				this->pb_arbol17->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 21:
				this->pb_arbol21->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 22:
				this->pb_arbol22->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 23:
				this->pb_arbol23->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 24:
				this->pb_arbol24->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 25:
				this->pb_arbol25->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 26:
				this->pb_arbol26->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 27:
				this->pb_arbol27->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 31:
				this->pb_arbol31->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 32:
				this->pb_arbol32->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 33:
				this->pb_arbol33->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 34:
				this->pb_arbol34->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 35:
				this->pb_arbol35->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 36:
				this->pb_arbol36->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 37:
				this->pb_arbol37->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 41:
				this->pb_arbol41->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 42:
				this->pb_arbol42->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 43:
				this->pb_arbol43->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 44:
				this->pb_arbol44->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 45:
				this->pb_arbol45->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 46:
				this->pb_arbol46->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 47:
				this->pb_arbol47->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 51:
				this->pb_arbol51->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 52:
				this->pb_arbol52->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 53:
				this->pb_arbol53->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 54:
				this->pb_arbol54->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 55:
				this->pb_arbol55->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 56:
				this->pb_arbol56->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 57:
				this->pb_arbol57->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 61:
				this->pb_arbol61->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 62:
				this->pb_arbol62->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 63:
				this->pb_arbol63->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 64:
				this->pb_arbol64->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 65:
				this->pb_arbol65->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 66:
				this->pb_arbol66->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 67:
				this->pb_arbol67->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 71:
				this->pb_arbol71->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 72:
				this->pb_arbol72->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 73:
				this->pb_arbol73->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 74:
				this->pb_arbol74->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 75:
				this->pb_arbol75->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 76:
				this->pb_arbol76->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			case 77:
				this->pb_arbol77->BackgroundImage = Image::FromFile("img//arbolLimones.png");
				break;
			default:
				break;
			}
		}
		void cambImageArbolTransparente(int num) {
			switch (num)
			{
			case 11:
				this->pb_arbol11->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 12:
				this->pb_arbol12->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 13:
				this->pb_arbol13->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 14:
				this->pb_arbol14->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 15:
				this->pb_arbol15->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 16:
				this->pb_arbol16->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 17:
				this->pb_arbol17->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 21:
				this->pb_arbol21->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 22:
				this->pb_arbol22->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 23:
				this->pb_arbol23->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 24:
				this->pb_arbol24->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 25:
				this->pb_arbol25->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 26:
				this->pb_arbol26->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 27:
				this->pb_arbol27->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 31:
				this->pb_arbol31->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 32:
				this->pb_arbol32->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 33:
				this->pb_arbol33->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 34:
				this->pb_arbol34->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 35:
				this->pb_arbol35->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 36:
				this->pb_arbol36->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 37:
				this->pb_arbol37->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 41:
				this->pb_arbol41->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 42:
				this->pb_arbol42->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 43:
				this->pb_arbol43->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 44:
				this->pb_arbol44->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 45:
				this->pb_arbol45->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 46:
				this->pb_arbol46->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 47:
				this->pb_arbol47->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 51:
				this->pb_arbol51->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 52:
				this->pb_arbol52->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 53:
				this->pb_arbol53->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 54:
				this->pb_arbol54->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 55:
				this->pb_arbol55->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 56:
				this->pb_arbol56->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 57:
				this->pb_arbol57->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 61:
				this->pb_arbol61->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 62:
				this->pb_arbol62->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 63:
				this->pb_arbol63->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 64:
				this->pb_arbol64->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 65:
				this->pb_arbol65->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 66:
				this->pb_arbol66->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 67:
				this->pb_arbol67->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 71:
				this->pb_arbol71->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 72:
				this->pb_arbol72->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 73:
				this->pb_arbol73->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 74:
				this->pb_arbol74->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 75:
				this->pb_arbol75->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 76:
				this->pb_arbol76->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 77:
				this->pb_arbol77->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			default:
				break;
			}
		}
		void cambImagePlagaCuervo(int num) {
			switch (num)
			{
			case 11:
				this->pb_plaga11->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 12:
				this->pb_plaga12->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 13:
				this->pb_plaga13->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 14:
				this->pb_plaga14->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 15:
				this->pb_plaga15->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 16:
				this->pb_plaga16->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 17:
				this->pb_plaga17->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 21:
				this->pb_plaga21->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 22:
				this->pb_plaga22->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 23:
				this->pb_plaga23->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 24:
				this->pb_plaga24->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 25:
				this->pb_plaga25->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 26:
				this->pb_plaga26->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 27:
				this->pb_plaga27->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 31:
				this->pb_plaga31->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 32:
				this->pb_plaga32->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 33:
				this->pb_plaga33->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 34:
				this->pb_plaga34->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 35:
				this->pb_plaga35->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 36:
				this->pb_plaga36->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 37:
				this->pb_plaga37->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 41:
				this->pb_plaga41->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 42:
				this->pb_plaga42->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 43:
				this->pb_plaga43->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 44:
				this->pb_plaga44->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 45:
				this->pb_plaga45->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 46:
				this->pb_plaga46->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 47:
				this->pb_plaga47->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 51:
				this->pb_plaga51->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 52:
				this->pb_plaga52->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 53:
				this->pb_plaga53->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 54:
				this->pb_plaga54->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 55:
				this->pb_plaga55->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 56:
				this->pb_plaga56->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 57:
				this->pb_plaga57->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 61:
				this->pb_plaga61->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 62:
				this->pb_plaga62->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 63:
				this->pb_plaga63->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 64:
				this->pb_plaga64->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 65:
				this->pb_plaga65->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 66:
				this->pb_plaga66->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 67:
				this->pb_plaga67->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 71:
				this->pb_plaga71->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 72:
				this->pb_plaga72->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 73:
				this->pb_plaga73->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 74:
				this->pb_plaga74->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 75:
				this->pb_plaga75->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 76:
				this->pb_plaga76->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			case 77:
				this->pb_plaga77->BackgroundImage = Image::FromFile("img//cuervo.png");
				break;
			default:
				break;
			}
		}
		void cambImagePlagaOveja(int num) {
			switch (num)
			{
			case 11:
				this->pb_plaga11->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 12:
				this->pb_plaga12->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 13:
				this->pb_plaga13->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 14:
				this->pb_plaga14->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 15:
				this->pb_plaga15->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 16:
				this->pb_plaga16->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 17:
				this->pb_plaga17->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 21:
				this->pb_plaga21->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 22:
				this->pb_plaga22->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 23:
				this->pb_plaga23->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 24:
				this->pb_plaga24->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 25:
				this->pb_plaga25->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 26:
				this->pb_plaga26->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 27:
				this->pb_plaga27->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 31:
				this->pb_plaga31->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 32:
				this->pb_plaga32->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 33:
				this->pb_plaga33->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 34:
				this->pb_plaga34->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 35:
				this->pb_plaga35->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 36:
				this->pb_plaga36->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 37:
				this->pb_plaga37->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 41:
				this->pb_plaga41->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 42:
				this->pb_plaga42->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 43:
				this->pb_plaga43->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 44:
				this->pb_plaga44->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 45:
				this->pb_plaga45->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 46:
				this->pb_plaga46->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 47:
				this->pb_plaga47->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 51:
				this->pb_plaga51->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 52:
				this->pb_plaga52->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 53:
				this->pb_plaga53->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 54:
				this->pb_plaga54->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 55:
				this->pb_plaga55->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 56:
				this->pb_plaga56->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 57:
				this->pb_plaga57->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 61:
				this->pb_plaga61->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 62:
				this->pb_plaga62->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 63:
				this->pb_plaga63->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 64:
				this->pb_plaga64->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 65:
				this->pb_plaga65->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 66:
				this->pb_plaga66->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 67:
				this->pb_plaga67->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 71:
				this->pb_plaga71->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 72:
				this->pb_plaga72->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 73:
				this->pb_plaga73->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 74:
				this->pb_plaga74->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 75:
				this->pb_plaga75->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 76:
				this->pb_plaga76->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			case 77:
				this->pb_plaga77->BackgroundImage = Image::FromFile("img//oveja.png");
				break;
			default:
				break;
			}
		}
		void cambImagePlagaGusano(int num) {
			switch (num)
			{
			case 11:
				this->pb_plaga11->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 12:
				this->pb_plaga12->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 13:
				this->pb_plaga13->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 14:
				this->pb_plaga14->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 15:
				this->pb_plaga15->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 16:
				this->pb_plaga16->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 17:
				this->pb_plaga17->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 21:
				this->pb_plaga21->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 22:
				this->pb_plaga22->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 23:
				this->pb_plaga23->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 24:
				this->pb_plaga24->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 25:
				this->pb_plaga25->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 26:
				this->pb_plaga26->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 27:
				this->pb_plaga27->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 31:
				this->pb_plaga31->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 32:
				this->pb_plaga32->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 33:
				this->pb_plaga33->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 34:
				this->pb_plaga34->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 35:
				this->pb_plaga35->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 36:
				this->pb_plaga36->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 37:
				this->pb_plaga37->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 41:
				this->pb_plaga41->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 42:
				this->pb_plaga42->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 43:
				this->pb_plaga43->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 44:
				this->pb_plaga44->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 45:
				this->pb_plaga45->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 46:
				this->pb_plaga46->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 47:
				this->pb_plaga47->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 51:
				this->pb_plaga51->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 52:
				this->pb_plaga52->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 53:
				this->pb_plaga53->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 54:
				this->pb_plaga54->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 55:
				this->pb_plaga55->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 56:
				this->pb_plaga56->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 57:
				this->pb_plaga57->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 61:
				this->pb_plaga61->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 62:
				this->pb_plaga62->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 63:
				this->pb_plaga63->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 64:
				this->pb_plaga64->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 65:
				this->pb_plaga65->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 66:
				this->pb_plaga66->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 67:
				this->pb_plaga67->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 71:
				this->pb_plaga71->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 72:
				this->pb_plaga72->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 73:
				this->pb_plaga73->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 74:
				this->pb_plaga74->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 75:
				this->pb_plaga75->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 76:
				this->pb_plaga76->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			case 77:
				this->pb_plaga77->BackgroundImage = Image::FromFile("img//gusano.png");
				break;
			default:
				break;
			}
		}
		void cambImagePlagaTransparente(int num) {
			switch (num)
			{
			case 11:
				this->pb_plaga11->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 12:
				this->pb_plaga12->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 13:
				this->pb_plaga13->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 14:
				this->pb_plaga14->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 15:
				this->pb_plaga15->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 16:
				this->pb_plaga16->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 17:
				this->pb_plaga17->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 21:
				this->pb_plaga21->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 22:
				this->pb_plaga22->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 23:
				this->pb_plaga23->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 24:
				this->pb_plaga24->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 25:
				this->pb_plaga25->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 26:
				this->pb_plaga26->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 27:
				this->pb_plaga27->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 31:
				this->pb_plaga31->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 32:
				this->pb_plaga32->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 33:
				this->pb_plaga33->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 34:
				this->pb_plaga34->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 35:
				this->pb_plaga35->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 36:
				this->pb_plaga36->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 37:
				this->pb_plaga37->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 41:
				this->pb_plaga41->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 42:
				this->pb_plaga42->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 43:
				this->pb_plaga43->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 44:
				this->pb_plaga44->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 45:
				this->pb_plaga45->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 46:
				this->pb_plaga46->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 47:
				this->pb_plaga47->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 51:
				this->pb_plaga51->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 52:
				this->pb_plaga52->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 53:
				this->pb_plaga53->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 54:
				this->pb_plaga54->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 55:
				this->pb_plaga55->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 56:
				this->pb_plaga56->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 57:
				this->pb_plaga57->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 61:
				this->pb_plaga61->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 62:
				this->pb_plaga62->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 63:
				this->pb_plaga63->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 64:
				this->pb_plaga64->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 65:
				this->pb_plaga65->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 66:
				this->pb_plaga66->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 67:
				this->pb_plaga67->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 71:
				this->pb_plaga71->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 72:
				this->pb_plaga72->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 73:
				this->pb_plaga73->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 74:
				this->pb_plaga74->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 75:
				this->pb_plaga75->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 76:
				this->pb_plaga76->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			case 77:
				this->pb_plaga77->BackgroundImage = Image::FromFile("img//transparente.png");
				break;
			default:
				break;
			}
		}
		System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyCode == Keys::W) {
				cambImageGranjeroTransparente((granjero->getY()*10+granjero->getX()));
				granjero->moverArriba();
				cambImageGranjero((granjero->getY() * 10 + granjero->getX()));
			}
			if (e->KeyCode == Keys::A) {
				cambImageGranjeroTransparente((granjero->getY() * 10 + granjero->getX()));
				granjero->moverIzquierda();
				cambImageGranjero((granjero->getY() * 10 + granjero->getX()));
			}
			if (e->KeyCode == Keys::S) {
				cambImageGranjeroTransparente((granjero->getY() * 10 + granjero->getX()));
				granjero->moverAbajo();
				cambImageGranjero((granjero->getY() * 10 + granjero->getX()));
			}
			if (e->KeyCode == Keys::D) {
				cambImageGranjeroTransparente((granjero->getY() * 10 + granjero->getX()));
				granjero->moverDerecha();
				cambImageGranjero((granjero->getY() * 10 + granjero->getX()));
			}
			if (e->KeyCode == Keys::U) {
				for (int i = 0; i < binarios->size(); i++) {
					if ((*binarios)[i].getVivo()) {
						cambImageArbolABO(((*binarios)[i].getPosY() * 10 + (*binarios)[i].getPosX()));
					}
					else {
						cambImageArbolTransparente(((*binarios)[i].getPosY() * 10 + (*binarios)[i].getPosX()));
					}
				}
			}
		}

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pb_11;
	protected:
	private: System::Windows::Forms::PictureBox^ pb_12;
	private: System::Windows::Forms::PictureBox^ pb_13;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::PictureBox^ pb_arbol11;
	private: System::Windows::Forms::PictureBox^ pb_arbol12;
	private: System::Windows::Forms::PictureBox^ pb_arbol13;
private: System::Windows::Forms::PictureBox^ pb_arbol14;

	private: System::Windows::Forms::PictureBox^ pb_arbol15;
	private: System::Windows::Forms::PictureBox^ pb_arbol16;
	private: System::Windows::Forms::PictureBox^ pb_arbol17;
	private: System::Windows::Forms::PictureBox^ pb_arbol21;
	private: System::Windows::Forms::PictureBox^ pb_arbol22;
	private: System::Windows::Forms::PictureBox^ pb_arbol23;
	private: System::Windows::Forms::PictureBox^ pb_arbol24;
	private: System::Windows::Forms::PictureBox^ pb_arbol25;
	private: System::Windows::Forms::PictureBox^ pb_arbol26;
	private: System::Windows::Forms::PictureBox^ pb_arbol27;
	private: System::Windows::Forms::PictureBox^ pb_arbol37;















	private: System::Windows::Forms::PictureBox^ pb_arbol36;

	private: System::Windows::Forms::PictureBox^ pb_arbol35;

	private: System::Windows::Forms::PictureBox^ pb_arbol34;

	private: System::Windows::Forms::PictureBox^ pb_arbol33;

	private: System::Windows::Forms::PictureBox^ pb_arbol32;

	private: System::Windows::Forms::PictureBox^ pb_arbol31;
private: System::Windows::Forms::PictureBox^ pb_arbol47;


private: System::Windows::Forms::PictureBox^ pb_arbol46;

private: System::Windows::Forms::PictureBox^ pb_arbol45;

private: System::Windows::Forms::PictureBox^ pb_arbol44;

private: System::Windows::Forms::PictureBox^ pb_arbol43;

private: System::Windows::Forms::PictureBox^ pb_arbol42;

private: System::Windows::Forms::PictureBox^ pb_arbol41;
private: System::Windows::Forms::PictureBox^ pb_arbol57;


private: System::Windows::Forms::PictureBox^ pb_arbol56;

private: System::Windows::Forms::PictureBox^ pb_arbol55;

private: System::Windows::Forms::PictureBox^ pb_arbol54;

private: System::Windows::Forms::PictureBox^ pb_arbol53;

private: System::Windows::Forms::PictureBox^ pb_arbol52;

private: System::Windows::Forms::PictureBox^ pb_arbol51;
private: System::Windows::Forms::PictureBox^ pb_arbol67;


private: System::Windows::Forms::PictureBox^ pb_arbol66;

private: System::Windows::Forms::PictureBox^ pb_arbol65;

private: System::Windows::Forms::PictureBox^ pb_arbol64;

private: System::Windows::Forms::PictureBox^ pb_arbol63;

private: System::Windows::Forms::PictureBox^ pb_arbol62;

private: System::Windows::Forms::PictureBox^ pb_arbol61;
private: System::Windows::Forms::PictureBox^ pb_arbol77;

private: System::Windows::Forms::PictureBox^ pb_arbol76;

private: System::Windows::Forms::PictureBox^ pb_arbol75;

private: System::Windows::Forms::PictureBox^ pb_arbol74;

private: System::Windows::Forms::PictureBox^ pb_arbol73;

private: System::Windows::Forms::PictureBox^ pb_arbol72;

private: System::Windows::Forms::PictureBox^ pb_arbol71;

private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox49;
private: System::Windows::Forms::PictureBox^ pictureBox50;
private: System::Windows::Forms::PictureBox^ pictureBox51;
private: System::Windows::Forms::PictureBox^ pictureBox52;
private: System::Windows::Forms::PictureBox^ pictureBox53;
private: System::Windows::Forms::PictureBox^ pb_granjero11;
private: System::Windows::Forms::PictureBox^ pb_granjero12;
private: System::Windows::Forms::PictureBox^ pb_granjero13;
private: System::Windows::Forms::PictureBox^ pb_granjero14;
private: System::Windows::Forms::PictureBox^ pb_granjero15;
private: System::Windows::Forms::PictureBox^ pb_granjero16;
private: System::Windows::Forms::PictureBox^ pb_granjero17;
private: System::Windows::Forms::PictureBox^ pb_granjero21;
private: System::Windows::Forms::PictureBox^ pb_granjero22;
private: System::Windows::Forms::PictureBox^ pb_granjero23;
private: System::Windows::Forms::PictureBox^ pb_granjero24;
private: System::Windows::Forms::PictureBox^ pb_granjero25;
private: System::Windows::Forms::PictureBox^ pb_granjero26;
private: System::Windows::Forms::PictureBox^ pb_granjero27;
private: System::Windows::Forms::PictureBox^ pb_granjero31;
private: System::Windows::Forms::PictureBox^ pb_granjero33;
private: System::Windows::Forms::PictureBox^ pb_granjero34;
private: System::Windows::Forms::PictureBox^ pb_granjero35;
private: System::Windows::Forms::PictureBox^ pb_granjero36;
private: System::Windows::Forms::PictureBox^ pb_granjero37;
private: System::Windows::Forms::PictureBox^ pb_granjero41;
private: System::Windows::Forms::PictureBox^ pb_granjero42;
private: System::Windows::Forms::PictureBox^ pb_granjero43;
private: System::Windows::Forms::PictureBox^ pb_granjero44;
private: System::Windows::Forms::PictureBox^ pb_granjero45;
private: System::Windows::Forms::PictureBox^ pb_granjero46;
private: System::Windows::Forms::PictureBox^ pb_granjero47;
private: System::Windows::Forms::PictureBox^ pb_granjero51;
private: System::Windows::Forms::PictureBox^ pb_granjero52;
private: System::Windows::Forms::PictureBox^ pb_granjero53;
private: System::Windows::Forms::PictureBox^ pb_granjero54;
private: System::Windows::Forms::PictureBox^ pb_granjero55;
private: System::Windows::Forms::PictureBox^ pb_granjero56;
private: System::Windows::Forms::PictureBox^ pb_granjero57;
private: System::Windows::Forms::PictureBox^ pb_granjero61;
private: System::Windows::Forms::PictureBox^ pb_granjero62;
private: System::Windows::Forms::PictureBox^ pb_granjero63;
private: System::Windows::Forms::PictureBox^ pb_granjero64;
private: System::Windows::Forms::PictureBox^ pb_granjero65;
private: System::Windows::Forms::PictureBox^ pb_granjero66;
private: System::Windows::Forms::PictureBox^ pb_granjero67;
private: System::Windows::Forms::PictureBox^ pb_granjero71;
private: System::Windows::Forms::PictureBox^ pb_granjero72;
private: System::Windows::Forms::PictureBox^ pb_granjero77;













































private: System::Windows::Forms::PictureBox^ pb_granjero76;

private: System::Windows::Forms::PictureBox^ pb_granjero75;

private: System::Windows::Forms::PictureBox^ pb_granjero74;

private: System::Windows::Forms::PictureBox^ pb_granjero73;

private: System::Windows::Forms::PictureBox^ pb_granjero32;
private: System::Windows::Forms::PictureBox^ pb_plaga11;
private: System::Windows::Forms::PictureBox^ pb_espanta17;


private: System::Windows::Forms::PictureBox^ pb_plaga17;
private: System::Windows::Forms::PictureBox^ pb_espanta16;


private: System::Windows::Forms::PictureBox^ pb_plaga16;
private: System::Windows::Forms::PictureBox^ pb_espanta15;


private: System::Windows::Forms::PictureBox^ pb_plaga15;
private: System::Windows::Forms::PictureBox^ pb_espanta14;


private: System::Windows::Forms::PictureBox^ pb_plaga14;
private: System::Windows::Forms::PictureBox^ pb_espanta13;


private: System::Windows::Forms::PictureBox^ pb_plaga13;
private: System::Windows::Forms::PictureBox^ pb_espanta12;


private: System::Windows::Forms::PictureBox^ pb_plaga12;
private: System::Windows::Forms::PictureBox^ pb_espanta11;
private: System::Windows::Forms::PictureBox^ pb_espanta27;



private: System::Windows::Forms::PictureBox^ pb_plaga27;
private: System::Windows::Forms::PictureBox^ pb_espanta26;


private: System::Windows::Forms::PictureBox^ pb_plaga26;
private: System::Windows::Forms::PictureBox^ pb_espanta25;


private: System::Windows::Forms::PictureBox^ pb_plaga25;
private: System::Windows::Forms::PictureBox^ pb_espanta24;


private: System::Windows::Forms::PictureBox^ pb_plaga24;
private: System::Windows::Forms::PictureBox^ pb_espanta23;


private: System::Windows::Forms::PictureBox^ pb_plaga23;
private: System::Windows::Forms::PictureBox^ pb_espanta22;


private: System::Windows::Forms::PictureBox^ pb_plaga22;

private: System::Windows::Forms::PictureBox^ pb_espanta21;

private: System::Windows::Forms::PictureBox^ pb_plaga21;
private: System::Windows::Forms::PictureBox^ pb_espanta45;


private: System::Windows::Forms::PictureBox^ pb_plaga45;
private: System::Windows::Forms::PictureBox^ pb_espanta46;


private: System::Windows::Forms::PictureBox^ pb_plaga46;
private: System::Windows::Forms::PictureBox^ pb_espanta47;


private: System::Windows::Forms::PictureBox^ pb_plaga47;
private: System::Windows::Forms::PictureBox^ pb_espanta44;


private: System::Windows::Forms::PictureBox^ pb_plaga44;
private: System::Windows::Forms::PictureBox^ pb_espanta43;


private: System::Windows::Forms::PictureBox^ pb_plaga43;
private: System::Windows::Forms::PictureBox^ pb_espanta42;


private: System::Windows::Forms::PictureBox^ pb_plaga42;

private: System::Windows::Forms::PictureBox^ pb_espanta41;

private: System::Windows::Forms::PictureBox^ pb_plaga41;
private: System::Windows::Forms::PictureBox^ pb_espanta37;


private: System::Windows::Forms::PictureBox^ pb_plaga37;
private: System::Windows::Forms::PictureBox^ pb_espanta36;


private: System::Windows::Forms::PictureBox^ pb_plaga36;
private: System::Windows::Forms::PictureBox^ pb_espanta35;


private: System::Windows::Forms::PictureBox^ pb_plaga35;
private: System::Windows::Forms::PictureBox^ pb_espanta34;


private: System::Windows::Forms::PictureBox^ pb_plaga34;
private: System::Windows::Forms::PictureBox^ pb_espanta33;


private: System::Windows::Forms::PictureBox^ pb_plaga33;
private: System::Windows::Forms::PictureBox^ pb_espanta32;




private: System::Windows::Forms::PictureBox^ pb_plaga32;

private: System::Windows::Forms::PictureBox^ pb_espanta31;
private: System::Windows::Forms::PictureBox^ pb_plaga31;
private: System::Windows::Forms::PictureBox^ pb_espanta56;



private: System::Windows::Forms::PictureBox^ pb_plaga56;
private: System::Windows::Forms::PictureBox^ pb_espanta55;


private: System::Windows::Forms::PictureBox^ pb_plaga55;
private: System::Windows::Forms::PictureBox^ pb_espanta54;


private: System::Windows::Forms::PictureBox^ pb_plaga54;
private: System::Windows::Forms::PictureBox^ pb_espanta53;


private: System::Windows::Forms::PictureBox^ pb_plaga53;
private: System::Windows::Forms::PictureBox^ pb_espanta52;


private: System::Windows::Forms::PictureBox^ pb_plaga52;

private: System::Windows::Forms::PictureBox^ pb_espanta51;

private: System::Windows::Forms::PictureBox^ pb_plaga51;
private: System::Windows::Forms::PictureBox^ pb_plaga61;


private: System::Windows::Forms::PictureBox^ pb_espanta57;

private: System::Windows::Forms::PictureBox^ pb_plaga57;
private: System::Windows::Forms::PictureBox^ pb_espanta67;


private: System::Windows::Forms::PictureBox^ pb_plaga67;
private: System::Windows::Forms::PictureBox^ pb_espanta66;


private: System::Windows::Forms::PictureBox^ pb_plaga66;
private: System::Windows::Forms::PictureBox^ pb_espanta65;


private: System::Windows::Forms::PictureBox^ pb_plaga65;
private: System::Windows::Forms::PictureBox^ pb_espanta64;


private: System::Windows::Forms::PictureBox^ pb_plaga64;
private: System::Windows::Forms::PictureBox^ pb_espanta63;


private: System::Windows::Forms::PictureBox^ pb_plaga63;
private: System::Windows::Forms::PictureBox^ pb_espanta62;




private: System::Windows::Forms::PictureBox^ pb_plaga62;

private: System::Windows::Forms::PictureBox^ pb_espanta61;
private: System::Windows::Forms::PictureBox^ pb_espanta77;


private: System::Windows::Forms::PictureBox^ pb_plaga77;
private: System::Windows::Forms::PictureBox^ pb_espanta76;


private: System::Windows::Forms::PictureBox^ pb_plaga76;
private: System::Windows::Forms::PictureBox^ pb_espanta75;


private: System::Windows::Forms::PictureBox^ pb_plaga75;
private: System::Windows::Forms::PictureBox^ pb_espanta74;


private: System::Windows::Forms::PictureBox^ pb_plaga74;
private: System::Windows::Forms::PictureBox^ pb_espanta73;


private: System::Windows::Forms::PictureBox^ pb_plaga73;
private: System::Windows::Forms::PictureBox^ pb_espanta72;


private: System::Windows::Forms::PictureBox^ pb_plaga72;
private: System::Windows::Forms::PictureBox^ pb_espanta71;


private: System::Windows::Forms::PictureBox^ pb_plaga71;
private: System::Windows::Forms::Label^ lbl_TituloArbol;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ lbl_PosiAB;
private: System::Windows::Forms::Label^ lbl_PosiHEAP;


private: System::Windows::Forms::Label^ lbl_PosiAVL;
private: System::Windows::Forms::Label^ lbl_FrutaHEAP;
private: System::Windows::Forms::Label^ lbl_FrutaAVL;
private: System::Windows::Forms::Label^ lbl_FrutaAB;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ lbl_MontoTotalHEAP;
private: System::Windows::Forms::Label^ lbl_MontoTotalAVL;
private: System::Windows::Forms::Label^ lbl_MontoTotalAB;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ btn_VenderAB;
private: System::Windows::Forms::Button^ btn_VenderAVL;
private: System::Windows::Forms::Button^ btn_VenderHEAP;
private: System::Windows::Forms::Button^ btn_VenderTodo;
private: System::Windows::Forms::Button^ btn_Mercado;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::PictureBox^ pb_ArbolAB;
private: System::Windows::Forms::PictureBox^ pb_ArbolAVL;
private: System::Windows::Forms::PictureBox^ pb_ArbolHEAP;
private: System::Windows::Forms::PictureBox^ pb_Espanta;
private: System::Windows::Forms::Label^ lbl_CantAB;
private: System::Windows::Forms::Label^ lbl_CantAVL;
private: System::Windows::Forms::Label^ lbl_CantHEAP;
private: System::Windows::Forms::Label^ lbl_CantEspanta;
private: System::Windows::Forms::Button^ btn_SembrarAB;
private: System::Windows::Forms::Button^ btn_SembrarAVL;
private: System::Windows::Forms::Button^ btn_SembrarHEAP;
private: System::Windows::Forms::Button^ btn_SembrarEspanta;
private: System::Windows::Forms::Button^ btn_Pause;
private: System::Windows::Forms::Button^ btn_Resume;
private: System::Windows::Forms::Button^ btn_Save;
private: System::Windows::Forms::Button^ btn_VenderSPLAY;

private: System::Windows::Forms::Label^ lbl_MontoTotalSPLAY;

private: System::Windows::Forms::Label^ lbl_FrutaSPLAY;

private: System::Windows::Forms::Label^ lbl_PosiSPLAY;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ btn_SembrarSPLAY;

private: System::Windows::Forms::Label^ lbl_CantSPLAY;



private: System::Windows::Forms::PictureBox^ pb_ArbolSPLAY;

private: System::Windows::Forms::Label^ label13;

























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Granjero* granjero = new Granjero("Granjero", 100000);
		vector<ArbolBinarioOrdenado>* binarios = new vector<ArbolBinarioOrdenado>;

		// Variables (representan la entrada de la GUI)
		// Generales
		int tamannoMapa = 8;
		int destruccionFrutoCuervo = 15;
		int tasaComerCuervo = 2;
		int destruccionFrutoOveja = 30;
		int tasaComerOveja = 5;
		int destruccionArbol = 60;

		// Arboles
		//Binarios
		int crecimientoArbolBinario = 60;
		int crecimientoFrutoBinario = 25;
		int tasaFrutos = 2;
		double valorMinBinarios = 0.05;
		double valorMaxBinarios = 7.5;

		void initImages() {
			this->BackgroundImage = Image::FromFile("img//granja.jpg");
			this->pb_ArbolAB->BackgroundImage = Image::FromFile("img//arbolManzana.png");
			this->pb_ArbolAVL->BackgroundImage = Image::FromFile("img//arbolFrutas.png");
			this->pb_ArbolHEAP->BackgroundImage = Image::FromFile("img//arbolChiva.png");
			this->pb_ArbolSPLAY->BackgroundImage = Image::FromFile("img//arbolLimones.png");
			this->pb_Espanta->BackgroundImage = Image::FromFile("img//espanta.png");
			cambImageGranjero((granjero->getY() * 10 + granjero->getX()));
			int num = (granjero->getY() * 10 + granjero->getX());
			cout <<""<< num<<"llllll";

		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pb_11 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_12 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol11 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol12 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol13 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol14 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol15 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol16 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol17 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol21 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol22 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol23 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol24 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol25 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol26 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol27 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol37 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol36 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol35 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol34 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol33 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol32 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol31 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol47 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol46 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol45 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol44 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol43 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol42 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol41 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol57 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol56 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol55 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol54 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol53 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol52 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol51 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol67 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol66 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol65 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol64 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol63 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol62 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol61 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol77 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol76 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol75 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol74 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol73 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol72 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_arbol71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero11 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero12 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero13 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero14 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero15 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero16 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero17 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero21 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero22 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero23 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero24 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero25 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero26 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero27 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero31 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero32 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero33 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero34 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero35 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero36 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero37 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero41 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero42 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero43 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero44 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero45 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero46 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero47 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero51 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero52 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero53 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero54 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero55 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero56 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero57 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero61 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero62 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero63 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero64 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero65 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero66 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero67 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero71 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero72 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero77 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero76 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero75 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero74 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_granjero73 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga11 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta17 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga17 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta16 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga16 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta15 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga15 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta14 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga14 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta13 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga13 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta12 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga12 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta11 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta27 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga27 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta26 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga26 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta25 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga25 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta24 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga24 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta23 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga23 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta22 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga22 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta21 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga21 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta45 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga45 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta46 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga46 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta47 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga47 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta44 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga44 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta43 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga43 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta42 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga42 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta41 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga41 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta37 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga37 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta36 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga36 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta35 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga35 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta34 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga34 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta33 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga33 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta32 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga32 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta31 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga31 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta56 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga56 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta55 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga55 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta54 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga54 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta53 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga53 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta52 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga52 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta51 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga51 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga61 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta57 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga57 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta67 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga67 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta66 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga66 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta65 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga65 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta64 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga64 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta63 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga63 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta62 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga62 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta61 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta77 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga77 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta76 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga76 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta75 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga75 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta74 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga74 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta73 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga73 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta72 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga72 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_espanta71 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_plaga71 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_TituloArbol = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_PosiAB = (gcnew System::Windows::Forms::Label());
			this->lbl_PosiHEAP = (gcnew System::Windows::Forms::Label());
			this->lbl_PosiAVL = (gcnew System::Windows::Forms::Label());
			this->lbl_FrutaHEAP = (gcnew System::Windows::Forms::Label());
			this->lbl_FrutaAVL = (gcnew System::Windows::Forms::Label());
			this->lbl_FrutaAB = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbl_MontoTotalHEAP = (gcnew System::Windows::Forms::Label());
			this->lbl_MontoTotalAVL = (gcnew System::Windows::Forms::Label());
			this->lbl_MontoTotalAB = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_VenderAB = (gcnew System::Windows::Forms::Button());
			this->btn_VenderAVL = (gcnew System::Windows::Forms::Button());
			this->btn_VenderHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_VenderTodo = (gcnew System::Windows::Forms::Button());
			this->btn_Mercado = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pb_ArbolAB = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ArbolAVL = (gcnew System::Windows::Forms::PictureBox());
			this->pb_ArbolHEAP = (gcnew System::Windows::Forms::PictureBox());
			this->pb_Espanta = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_CantAB = (gcnew System::Windows::Forms::Label());
			this->lbl_CantAVL = (gcnew System::Windows::Forms::Label());
			this->lbl_CantHEAP = (gcnew System::Windows::Forms::Label());
			this->lbl_CantEspanta = (gcnew System::Windows::Forms::Label());
			this->btn_SembrarAB = (gcnew System::Windows::Forms::Button());
			this->btn_SembrarAVL = (gcnew System::Windows::Forms::Button());
			this->btn_SembrarHEAP = (gcnew System::Windows::Forms::Button());
			this->btn_SembrarEspanta = (gcnew System::Windows::Forms::Button());
			this->btn_Pause = (gcnew System::Windows::Forms::Button());
			this->btn_Resume = (gcnew System::Windows::Forms::Button());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->btn_VenderSPLAY = (gcnew System::Windows::Forms::Button());
			this->lbl_MontoTotalSPLAY = (gcnew System::Windows::Forms::Label());
			this->lbl_FrutaSPLAY = (gcnew System::Windows::Forms::Label());
			this->lbl_PosiSPLAY = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btn_SembrarSPLAY = (gcnew System::Windows::Forms::Button());
			this->lbl_CantSPLAY = (gcnew System::Windows::Forms::Label());
			this->pb_ArbolSPLAY = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolAB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolAVL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolHEAP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Espanta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolSPLAY))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_11
			// 
			this->pb_11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_11->Location = System::Drawing::Point(186, 233);
			this->pb_11->Name = L"pb_11";
			this->pb_11->Size = System::Drawing::Size(120, 120);
			this->pb_11->TabIndex = 0;
			this->pb_11->TabStop = false;
			this->pb_11->Click += gcnew System::EventHandler(this, &Form1::pb_11_Click);
			// 
			// pb_12
			// 
			this->pb_12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_12->Location = System::Drawing::Point(312, 233);
			this->pb_12->Name = L"pb_12";
			this->pb_12->Size = System::Drawing::Size(120, 120);
			this->pb_12->TabIndex = 1;
			this->pb_12->TabStop = false;
			this->pb_12->Click += gcnew System::EventHandler(this, &Form1::pb_12_Click);
			// 
			// pb_13
			// 
			this->pb_13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_13->Location = System::Drawing::Point(438, 233);
			this->pb_13->Name = L"pb_13";
			this->pb_13->Size = System::Drawing::Size(120, 120);
			this->pb_13->TabIndex = 2;
			this->pb_13->TabStop = false;
			this->pb_13->Click += gcnew System::EventHandler(this, &Form1::pb_13_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(942, 233);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 120);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(564, 233);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(120, 120);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(690, 233);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(120, 120);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(816, 233);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(120, 120);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(942, 359);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(120, 120);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(816, 359);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(120, 120);
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(690, 359);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(120, 120);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(564, 359);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(120, 120);
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(438, 359);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(120, 120);
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(312, 359);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(120, 120);
			this->pictureBox10->TabIndex = 8;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Location = System::Drawing::Point(186, 359);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(120, 120);
			this->pictureBox11->TabIndex = 7;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox12->Location = System::Drawing::Point(816, 485);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(120, 120);
			this->pictureBox12->TabIndex = 20;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Location = System::Drawing::Point(690, 485);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(120, 120);
			this->pictureBox13->TabIndex = 19;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->Location = System::Drawing::Point(564, 485);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(120, 120);
			this->pictureBox14->TabIndex = 18;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->Location = System::Drawing::Point(438, 485);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(120, 120);
			this->pictureBox15->TabIndex = 17;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Location = System::Drawing::Point(312, 485);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(120, 120);
			this->pictureBox16->TabIndex = 16;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox17->Location = System::Drawing::Point(186, 485);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(120, 120);
			this->pictureBox17->TabIndex = 15;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox18->Location = System::Drawing::Point(942, 485);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(120, 120);
			this->pictureBox18->TabIndex = 14;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox19->Location = System::Drawing::Point(942, 611);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(120, 120);
			this->pictureBox19->TabIndex = 27;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox20->Location = System::Drawing::Point(816, 611);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(120, 120);
			this->pictureBox20->TabIndex = 26;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox21->Location = System::Drawing::Point(690, 611);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(120, 120);
			this->pictureBox21->TabIndex = 25;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox22->Location = System::Drawing::Point(564, 611);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(120, 120);
			this->pictureBox22->TabIndex = 24;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox23->Location = System::Drawing::Point(438, 611);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(120, 120);
			this->pictureBox23->TabIndex = 23;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox24->Location = System::Drawing::Point(312, 611);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(120, 120);
			this->pictureBox24->TabIndex = 22;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox25->Location = System::Drawing::Point(186, 611);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(120, 120);
			this->pictureBox25->TabIndex = 21;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox26->Location = System::Drawing::Point(942, 863);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(120, 120);
			this->pictureBox26->TabIndex = 41;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox27->Location = System::Drawing::Point(816, 863);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(120, 120);
			this->pictureBox27->TabIndex = 40;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox28->Location = System::Drawing::Point(690, 863);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(120, 120);
			this->pictureBox28->TabIndex = 39;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox29->Location = System::Drawing::Point(564, 863);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(120, 120);
			this->pictureBox29->TabIndex = 38;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox30->Location = System::Drawing::Point(438, 863);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(120, 120);
			this->pictureBox30->TabIndex = 37;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox31->Location = System::Drawing::Point(312, 863);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(120, 120);
			this->pictureBox31->TabIndex = 36;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox32->Location = System::Drawing::Point(186, 863);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(120, 120);
			this->pictureBox32->TabIndex = 35;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox33->Location = System::Drawing::Point(816, 737);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(120, 120);
			this->pictureBox33->TabIndex = 34;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox34->Location = System::Drawing::Point(690, 737);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(120, 120);
			this->pictureBox34->TabIndex = 33;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox35->Location = System::Drawing::Point(564, 737);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(120, 120);
			this->pictureBox35->TabIndex = 32;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox36->Location = System::Drawing::Point(438, 737);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(120, 120);
			this->pictureBox36->TabIndex = 31;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox37->Location = System::Drawing::Point(312, 737);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(120, 120);
			this->pictureBox37->TabIndex = 30;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox38->Location = System::Drawing::Point(186, 737);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(120, 120);
			this->pictureBox38->TabIndex = 29;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox39->Location = System::Drawing::Point(942, 737);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(120, 120);
			this->pictureBox39->TabIndex = 28;
			this->pictureBox39->TabStop = false;
			// 
			// pb_arbol11
			// 
			this->pb_arbol11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol11->Location = System::Drawing::Point(186, 280);
			this->pb_arbol11->Name = L"pb_arbol11";
			this->pb_arbol11->Size = System::Drawing::Size(76, 73);
			this->pb_arbol11->TabIndex = 42;
			this->pb_arbol11->TabStop = false;
			// 
			// pb_arbol12
			// 
			this->pb_arbol12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol12->Location = System::Drawing::Point(312, 280);
			this->pb_arbol12->Name = L"pb_arbol12";
			this->pb_arbol12->Size = System::Drawing::Size(76, 73);
			this->pb_arbol12->TabIndex = 43;
			this->pb_arbol12->TabStop = false;
			// 
			// pb_arbol13
			// 
			this->pb_arbol13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol13->Location = System::Drawing::Point(438, 280);
			this->pb_arbol13->Name = L"pb_arbol13";
			this->pb_arbol13->Size = System::Drawing::Size(76, 73);
			this->pb_arbol13->TabIndex = 44;
			this->pb_arbol13->TabStop = false;
			// 
			// pb_arbol14
			// 
			this->pb_arbol14->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol14->Location = System::Drawing::Point(564, 280);
			this->pb_arbol14->Name = L"pb_arbol14";
			this->pb_arbol14->Size = System::Drawing::Size(76, 73);
			this->pb_arbol14->TabIndex = 45;
			this->pb_arbol14->TabStop = false;
			// 
			// pb_arbol15
			// 
			this->pb_arbol15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol15->Location = System::Drawing::Point(690, 280);
			this->pb_arbol15->Name = L"pb_arbol15";
			this->pb_arbol15->Size = System::Drawing::Size(76, 73);
			this->pb_arbol15->TabIndex = 46;
			this->pb_arbol15->TabStop = false;
			this->pb_arbol15->Click += gcnew System::EventHandler(this, &Form1::pictureBox44_Click);
			// 
			// pb_arbol16
			// 
			this->pb_arbol16->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol16->Location = System::Drawing::Point(816, 280);
			this->pb_arbol16->Name = L"pb_arbol16";
			this->pb_arbol16->Size = System::Drawing::Size(76, 73);
			this->pb_arbol16->TabIndex = 47;
			this->pb_arbol16->TabStop = false;
			// 
			// pb_arbol17
			// 
			this->pb_arbol17->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol17->Location = System::Drawing::Point(942, 280);
			this->pb_arbol17->Name = L"pb_arbol17";
			this->pb_arbol17->Size = System::Drawing::Size(76, 73);
			this->pb_arbol17->TabIndex = 48;
			this->pb_arbol17->TabStop = false;
			// 
			// pb_arbol21
			// 
			this->pb_arbol21->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol21->Location = System::Drawing::Point(186, 406);
			this->pb_arbol21->Name = L"pb_arbol21";
			this->pb_arbol21->Size = System::Drawing::Size(76, 73);
			this->pb_arbol21->TabIndex = 49;
			this->pb_arbol21->TabStop = false;
			// 
			// pb_arbol22
			// 
			this->pb_arbol22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol22->Location = System::Drawing::Point(312, 406);
			this->pb_arbol22->Name = L"pb_arbol22";
			this->pb_arbol22->Size = System::Drawing::Size(76, 73);
			this->pb_arbol22->TabIndex = 50;
			this->pb_arbol22->TabStop = false;
			// 
			// pb_arbol23
			// 
			this->pb_arbol23->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol23->Location = System::Drawing::Point(438, 406);
			this->pb_arbol23->Name = L"pb_arbol23";
			this->pb_arbol23->Size = System::Drawing::Size(76, 73);
			this->pb_arbol23->TabIndex = 51;
			this->pb_arbol23->TabStop = false;
			// 
			// pb_arbol24
			// 
			this->pb_arbol24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol24->Location = System::Drawing::Point(564, 406);
			this->pb_arbol24->Name = L"pb_arbol24";
			this->pb_arbol24->Size = System::Drawing::Size(76, 73);
			this->pb_arbol24->TabIndex = 52;
			this->pb_arbol24->TabStop = false;
			// 
			// pb_arbol25
			// 
			this->pb_arbol25->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol25->Location = System::Drawing::Point(690, 406);
			this->pb_arbol25->Name = L"pb_arbol25";
			this->pb_arbol25->Size = System::Drawing::Size(76, 73);
			this->pb_arbol25->TabIndex = 53;
			this->pb_arbol25->TabStop = false;
			// 
			// pb_arbol26
			// 
			this->pb_arbol26->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol26->Location = System::Drawing::Point(816, 406);
			this->pb_arbol26->Name = L"pb_arbol26";
			this->pb_arbol26->Size = System::Drawing::Size(76, 73);
			this->pb_arbol26->TabIndex = 54;
			this->pb_arbol26->TabStop = false;
			// 
			// pb_arbol27
			// 
			this->pb_arbol27->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol27->Location = System::Drawing::Point(942, 406);
			this->pb_arbol27->Name = L"pb_arbol27";
			this->pb_arbol27->Size = System::Drawing::Size(76, 73);
			this->pb_arbol27->TabIndex = 55;
			this->pb_arbol27->TabStop = false;
			// 
			// pb_arbol37
			// 
			this->pb_arbol37->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol37->Location = System::Drawing::Point(942, 532);
			this->pb_arbol37->Name = L"pb_arbol37";
			this->pb_arbol37->Size = System::Drawing::Size(76, 73);
			this->pb_arbol37->TabIndex = 62;
			this->pb_arbol37->TabStop = false;
			// 
			// pb_arbol36
			// 
			this->pb_arbol36->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol36->Location = System::Drawing::Point(816, 532);
			this->pb_arbol36->Name = L"pb_arbol36";
			this->pb_arbol36->Size = System::Drawing::Size(76, 73);
			this->pb_arbol36->TabIndex = 61;
			this->pb_arbol36->TabStop = false;
			// 
			// pb_arbol35
			// 
			this->pb_arbol35->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol35->Location = System::Drawing::Point(690, 532);
			this->pb_arbol35->Name = L"pb_arbol35";
			this->pb_arbol35->Size = System::Drawing::Size(76, 73);
			this->pb_arbol35->TabIndex = 60;
			this->pb_arbol35->TabStop = false;
			this->pb_arbol35->Click += gcnew System::EventHandler(this, &Form1::pictureBox56_Click);
			// 
			// pb_arbol34
			// 
			this->pb_arbol34->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol34->Location = System::Drawing::Point(564, 532);
			this->pb_arbol34->Name = L"pb_arbol34";
			this->pb_arbol34->Size = System::Drawing::Size(76, 73);
			this->pb_arbol34->TabIndex = 59;
			this->pb_arbol34->TabStop = false;
			// 
			// pb_arbol33
			// 
			this->pb_arbol33->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol33->Location = System::Drawing::Point(438, 532);
			this->pb_arbol33->Name = L"pb_arbol33";
			this->pb_arbol33->Size = System::Drawing::Size(76, 73);
			this->pb_arbol33->TabIndex = 58;
			this->pb_arbol33->TabStop = false;
			this->pb_arbol33->Click += gcnew System::EventHandler(this, &Form1::pictureBox58_Click);
			// 
			// pb_arbol32
			// 
			this->pb_arbol32->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol32->Location = System::Drawing::Point(312, 532);
			this->pb_arbol32->Name = L"pb_arbol32";
			this->pb_arbol32->Size = System::Drawing::Size(76, 73);
			this->pb_arbol32->TabIndex = 57;
			this->pb_arbol32->TabStop = false;
			// 
			// pb_arbol31
			// 
			this->pb_arbol31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol31->Location = System::Drawing::Point(186, 532);
			this->pb_arbol31->Name = L"pb_arbol31";
			this->pb_arbol31->Size = System::Drawing::Size(76, 73);
			this->pb_arbol31->TabIndex = 56;
			this->pb_arbol31->TabStop = false;
			// 
			// pb_arbol47
			// 
			this->pb_arbol47->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol47->Location = System::Drawing::Point(942, 658);
			this->pb_arbol47->Name = L"pb_arbol47";
			this->pb_arbol47->Size = System::Drawing::Size(76, 73);
			this->pb_arbol47->TabIndex = 69;
			this->pb_arbol47->TabStop = false;
			// 
			// pb_arbol46
			// 
			this->pb_arbol46->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol46->Location = System::Drawing::Point(816, 658);
			this->pb_arbol46->Name = L"pb_arbol46";
			this->pb_arbol46->Size = System::Drawing::Size(76, 73);
			this->pb_arbol46->TabIndex = 68;
			this->pb_arbol46->TabStop = false;
			// 
			// pb_arbol45
			// 
			this->pb_arbol45->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol45->Location = System::Drawing::Point(690, 658);
			this->pb_arbol45->Name = L"pb_arbol45";
			this->pb_arbol45->Size = System::Drawing::Size(76, 73);
			this->pb_arbol45->TabIndex = 67;
			this->pb_arbol45->TabStop = false;
			// 
			// pb_arbol44
			// 
			this->pb_arbol44->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol44->Location = System::Drawing::Point(564, 658);
			this->pb_arbol44->Name = L"pb_arbol44";
			this->pb_arbol44->Size = System::Drawing::Size(76, 73);
			this->pb_arbol44->TabIndex = 66;
			this->pb_arbol44->TabStop = false;
			// 
			// pb_arbol43
			// 
			this->pb_arbol43->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol43->Location = System::Drawing::Point(438, 658);
			this->pb_arbol43->Name = L"pb_arbol43";
			this->pb_arbol43->Size = System::Drawing::Size(76, 73);
			this->pb_arbol43->TabIndex = 65;
			this->pb_arbol43->TabStop = false;
			// 
			// pb_arbol42
			// 
			this->pb_arbol42->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol42->Location = System::Drawing::Point(312, 658);
			this->pb_arbol42->Name = L"pb_arbol42";
			this->pb_arbol42->Size = System::Drawing::Size(76, 73);
			this->pb_arbol42->TabIndex = 64;
			this->pb_arbol42->TabStop = false;
			// 
			// pb_arbol41
			// 
			this->pb_arbol41->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol41->Location = System::Drawing::Point(186, 658);
			this->pb_arbol41->Name = L"pb_arbol41";
			this->pb_arbol41->Size = System::Drawing::Size(76, 73);
			this->pb_arbol41->TabIndex = 63;
			this->pb_arbol41->TabStop = false;
			// 
			// pb_arbol57
			// 
			this->pb_arbol57->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol57->Location = System::Drawing::Point(942, 784);
			this->pb_arbol57->Name = L"pb_arbol57";
			this->pb_arbol57->Size = System::Drawing::Size(76, 73);
			this->pb_arbol57->TabIndex = 76;
			this->pb_arbol57->TabStop = false;
			// 
			// pb_arbol56
			// 
			this->pb_arbol56->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol56->Location = System::Drawing::Point(816, 784);
			this->pb_arbol56->Name = L"pb_arbol56";
			this->pb_arbol56->Size = System::Drawing::Size(76, 73);
			this->pb_arbol56->TabIndex = 75;
			this->pb_arbol56->TabStop = false;
			// 
			// pb_arbol55
			// 
			this->pb_arbol55->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol55->Location = System::Drawing::Point(690, 784);
			this->pb_arbol55->Name = L"pb_arbol55";
			this->pb_arbol55->Size = System::Drawing::Size(76, 73);
			this->pb_arbol55->TabIndex = 74;
			this->pb_arbol55->TabStop = false;
			// 
			// pb_arbol54
			// 
			this->pb_arbol54->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol54->Location = System::Drawing::Point(564, 784);
			this->pb_arbol54->Name = L"pb_arbol54";
			this->pb_arbol54->Size = System::Drawing::Size(76, 73);
			this->pb_arbol54->TabIndex = 73;
			this->pb_arbol54->TabStop = false;
			this->pb_arbol54->Click += gcnew System::EventHandler(this, &Form1::pictureBox71_Click);
			// 
			// pb_arbol53
			// 
			this->pb_arbol53->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol53->Location = System::Drawing::Point(438, 784);
			this->pb_arbol53->Name = L"pb_arbol53";
			this->pb_arbol53->Size = System::Drawing::Size(76, 73);
			this->pb_arbol53->TabIndex = 72;
			this->pb_arbol53->TabStop = false;
			// 
			// pb_arbol52
			// 
			this->pb_arbol52->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol52->Location = System::Drawing::Point(312, 784);
			this->pb_arbol52->Name = L"pb_arbol52";
			this->pb_arbol52->Size = System::Drawing::Size(76, 73);
			this->pb_arbol52->TabIndex = 71;
			this->pb_arbol52->TabStop = false;
			// 
			// pb_arbol51
			// 
			this->pb_arbol51->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol51->Location = System::Drawing::Point(186, 784);
			this->pb_arbol51->Name = L"pb_arbol51";
			this->pb_arbol51->Size = System::Drawing::Size(76, 73);
			this->pb_arbol51->TabIndex = 70;
			this->pb_arbol51->TabStop = false;
			// 
			// pb_arbol67
			// 
			this->pb_arbol67->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol67->Location = System::Drawing::Point(942, 910);
			this->pb_arbol67->Name = L"pb_arbol67";
			this->pb_arbol67->Size = System::Drawing::Size(76, 73);
			this->pb_arbol67->TabIndex = 83;
			this->pb_arbol67->TabStop = false;
			// 
			// pb_arbol66
			// 
			this->pb_arbol66->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol66->Location = System::Drawing::Point(816, 910);
			this->pb_arbol66->Name = L"pb_arbol66";
			this->pb_arbol66->Size = System::Drawing::Size(76, 73);
			this->pb_arbol66->TabIndex = 82;
			this->pb_arbol66->TabStop = false;
			// 
			// pb_arbol65
			// 
			this->pb_arbol65->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol65->Location = System::Drawing::Point(690, 910);
			this->pb_arbol65->Name = L"pb_arbol65";
			this->pb_arbol65->Size = System::Drawing::Size(76, 73);
			this->pb_arbol65->TabIndex = 81;
			this->pb_arbol65->TabStop = false;
			// 
			// pb_arbol64
			// 
			this->pb_arbol64->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol64->Location = System::Drawing::Point(564, 910);
			this->pb_arbol64->Name = L"pb_arbol64";
			this->pb_arbol64->Size = System::Drawing::Size(76, 73);
			this->pb_arbol64->TabIndex = 80;
			this->pb_arbol64->TabStop = false;
			// 
			// pb_arbol63
			// 
			this->pb_arbol63->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol63->Location = System::Drawing::Point(438, 910);
			this->pb_arbol63->Name = L"pb_arbol63";
			this->pb_arbol63->Size = System::Drawing::Size(76, 73);
			this->pb_arbol63->TabIndex = 79;
			this->pb_arbol63->TabStop = false;
			// 
			// pb_arbol62
			// 
			this->pb_arbol62->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol62->Location = System::Drawing::Point(312, 910);
			this->pb_arbol62->Name = L"pb_arbol62";
			this->pb_arbol62->Size = System::Drawing::Size(76, 73);
			this->pb_arbol62->TabIndex = 78;
			this->pb_arbol62->TabStop = false;
			// 
			// pb_arbol61
			// 
			this->pb_arbol61->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol61->Location = System::Drawing::Point(186, 910);
			this->pb_arbol61->Name = L"pb_arbol61";
			this->pb_arbol61->Size = System::Drawing::Size(76, 73);
			this->pb_arbol61->TabIndex = 77;
			this->pb_arbol61->TabStop = false;
			// 
			// pb_arbol77
			// 
			this->pb_arbol77->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol77->Location = System::Drawing::Point(942, 1036);
			this->pb_arbol77->Name = L"pb_arbol77";
			this->pb_arbol77->Size = System::Drawing::Size(76, 73);
			this->pb_arbol77->TabIndex = 97;
			this->pb_arbol77->TabStop = false;
			// 
			// pb_arbol76
			// 
			this->pb_arbol76->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol76->Location = System::Drawing::Point(816, 1036);
			this->pb_arbol76->Name = L"pb_arbol76";
			this->pb_arbol76->Size = System::Drawing::Size(76, 73);
			this->pb_arbol76->TabIndex = 96;
			this->pb_arbol76->TabStop = false;
			// 
			// pb_arbol75
			// 
			this->pb_arbol75->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol75->Location = System::Drawing::Point(690, 1036);
			this->pb_arbol75->Name = L"pb_arbol75";
			this->pb_arbol75->Size = System::Drawing::Size(76, 73);
			this->pb_arbol75->TabIndex = 95;
			this->pb_arbol75->TabStop = false;
			// 
			// pb_arbol74
			// 
			this->pb_arbol74->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol74->Location = System::Drawing::Point(564, 1036);
			this->pb_arbol74->Name = L"pb_arbol74";
			this->pb_arbol74->Size = System::Drawing::Size(76, 73);
			this->pb_arbol74->TabIndex = 94;
			this->pb_arbol74->TabStop = false;
			// 
			// pb_arbol73
			// 
			this->pb_arbol73->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol73->Location = System::Drawing::Point(438, 1036);
			this->pb_arbol73->Name = L"pb_arbol73";
			this->pb_arbol73->Size = System::Drawing::Size(76, 73);
			this->pb_arbol73->TabIndex = 93;
			this->pb_arbol73->TabStop = false;
			// 
			// pb_arbol72
			// 
			this->pb_arbol72->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol72->Location = System::Drawing::Point(312, 1036);
			this->pb_arbol72->Name = L"pb_arbol72";
			this->pb_arbol72->Size = System::Drawing::Size(76, 73);
			this->pb_arbol72->TabIndex = 92;
			this->pb_arbol72->TabStop = false;
			// 
			// pb_arbol71
			// 
			this->pb_arbol71->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_arbol71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_arbol71->Location = System::Drawing::Point(186, 1036);
			this->pb_arbol71->Name = L"pb_arbol71";
			this->pb_arbol71->Size = System::Drawing::Size(76, 73);
			this->pb_arbol71->TabIndex = 91;
			this->pb_arbol71->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox47->Location = System::Drawing::Point(942, 989);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(120, 120);
			this->pictureBox47->TabIndex = 90;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox48->Location = System::Drawing::Point(816, 989);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(120, 120);
			this->pictureBox48->TabIndex = 89;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox49->Location = System::Drawing::Point(690, 989);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(120, 120);
			this->pictureBox49->TabIndex = 88;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox50->Location = System::Drawing::Point(564, 989);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(120, 120);
			this->pictureBox50->TabIndex = 87;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox51->Location = System::Drawing::Point(438, 989);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(120, 120);
			this->pictureBox51->TabIndex = 86;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox52->Location = System::Drawing::Point(312, 989);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(120, 120);
			this->pictureBox52->TabIndex = 85;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pictureBox53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox53->Location = System::Drawing::Point(186, 989);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(120, 120);
			this->pictureBox53->TabIndex = 84;
			this->pictureBox53->TabStop = false;
			// 
			// pb_granjero11
			// 
			this->pb_granjero11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero11->Location = System::Drawing::Point(260, 280);
			this->pb_granjero11->Name = L"pb_granjero11";
			this->pb_granjero11->Size = System::Drawing::Size(46, 72);
			this->pb_granjero11->TabIndex = 98;
			this->pb_granjero11->TabStop = false;
			// 
			// pb_granjero12
			// 
			this->pb_granjero12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero12->Location = System::Drawing::Point(386, 280);
			this->pb_granjero12->Name = L"pb_granjero12";
			this->pb_granjero12->Size = System::Drawing::Size(46, 72);
			this->pb_granjero12->TabIndex = 99;
			this->pb_granjero12->TabStop = false;
			// 
			// pb_granjero13
			// 
			this->pb_granjero13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero13->Location = System::Drawing::Point(512, 280);
			this->pb_granjero13->Name = L"pb_granjero13";
			this->pb_granjero13->Size = System::Drawing::Size(46, 72);
			this->pb_granjero13->TabIndex = 100;
			this->pb_granjero13->TabStop = false;
			// 
			// pb_granjero14
			// 
			this->pb_granjero14->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero14->Location = System::Drawing::Point(638, 280);
			this->pb_granjero14->Name = L"pb_granjero14";
			this->pb_granjero14->Size = System::Drawing::Size(46, 72);
			this->pb_granjero14->TabIndex = 101;
			this->pb_granjero14->TabStop = false;
			// 
			// pb_granjero15
			// 
			this->pb_granjero15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero15->Location = System::Drawing::Point(764, 280);
			this->pb_granjero15->Name = L"pb_granjero15";
			this->pb_granjero15->Size = System::Drawing::Size(46, 72);
			this->pb_granjero15->TabIndex = 102;
			this->pb_granjero15->TabStop = false;
			// 
			// pb_granjero16
			// 
			this->pb_granjero16->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero16->Location = System::Drawing::Point(890, 280);
			this->pb_granjero16->Name = L"pb_granjero16";
			this->pb_granjero16->Size = System::Drawing::Size(46, 72);
			this->pb_granjero16->TabIndex = 103;
			this->pb_granjero16->TabStop = false;
			// 
			// pb_granjero17
			// 
			this->pb_granjero17->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero17->Location = System::Drawing::Point(1016, 280);
			this->pb_granjero17->Name = L"pb_granjero17";
			this->pb_granjero17->Size = System::Drawing::Size(46, 72);
			this->pb_granjero17->TabIndex = 104;
			this->pb_granjero17->TabStop = false;
			// 
			// pb_granjero21
			// 
			this->pb_granjero21->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero21->Location = System::Drawing::Point(260, 407);
			this->pb_granjero21->Name = L"pb_granjero21";
			this->pb_granjero21->Size = System::Drawing::Size(46, 72);
			this->pb_granjero21->TabIndex = 105;
			this->pb_granjero21->TabStop = false;
			// 
			// pb_granjero22
			// 
			this->pb_granjero22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero22->Location = System::Drawing::Point(386, 406);
			this->pb_granjero22->Name = L"pb_granjero22";
			this->pb_granjero22->Size = System::Drawing::Size(46, 72);
			this->pb_granjero22->TabIndex = 106;
			this->pb_granjero22->TabStop = false;
			// 
			// pb_granjero23
			// 
			this->pb_granjero23->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero23->Location = System::Drawing::Point(512, 407);
			this->pb_granjero23->Name = L"pb_granjero23";
			this->pb_granjero23->Size = System::Drawing::Size(46, 72);
			this->pb_granjero23->TabIndex = 107;
			this->pb_granjero23->TabStop = false;
			// 
			// pb_granjero24
			// 
			this->pb_granjero24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero24->Location = System::Drawing::Point(638, 407);
			this->pb_granjero24->Name = L"pb_granjero24";
			this->pb_granjero24->Size = System::Drawing::Size(46, 73);
			this->pb_granjero24->TabIndex = 108;
			this->pb_granjero24->TabStop = false;
			// 
			// pb_granjero25
			// 
			this->pb_granjero25->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero25->Location = System::Drawing::Point(764, 406);
			this->pb_granjero25->Name = L"pb_granjero25";
			this->pb_granjero25->Size = System::Drawing::Size(46, 72);
			this->pb_granjero25->TabIndex = 109;
			this->pb_granjero25->TabStop = false;
			// 
			// pb_granjero26
			// 
			this->pb_granjero26->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero26->Location = System::Drawing::Point(890, 406);
			this->pb_granjero26->Name = L"pb_granjero26";
			this->pb_granjero26->Size = System::Drawing::Size(46, 72);
			this->pb_granjero26->TabIndex = 110;
			this->pb_granjero26->TabStop = false;
			// 
			// pb_granjero27
			// 
			this->pb_granjero27->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero27->Location = System::Drawing::Point(1016, 406);
			this->pb_granjero27->Name = L"pb_granjero27";
			this->pb_granjero27->Size = System::Drawing::Size(46, 72);
			this->pb_granjero27->TabIndex = 111;
			this->pb_granjero27->TabStop = false;
			this->pb_granjero27->Click += gcnew System::EventHandler(this, &Form1::pictureBox60_Click);
			// 
			// pb_granjero31
			// 
			this->pb_granjero31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero31->Location = System::Drawing::Point(260, 532);
			this->pb_granjero31->Name = L"pb_granjero31";
			this->pb_granjero31->Size = System::Drawing::Size(46, 72);
			this->pb_granjero31->TabIndex = 112;
			this->pb_granjero31->TabStop = false;
			// 
			// pb_granjero32
			// 
			this->pb_granjero32->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero32->Location = System::Drawing::Point(386, 532);
			this->pb_granjero32->Name = L"pb_granjero32";
			this->pb_granjero32->Size = System::Drawing::Size(46, 72);
			this->pb_granjero32->TabIndex = 113;
			this->pb_granjero32->TabStop = false;
			this->pb_granjero32->Click += gcnew System::EventHandler(this, &Form1::pictureBox62_Click);
			// 
			// pb_granjero33
			// 
			this->pb_granjero33->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero33->Location = System::Drawing::Point(512, 532);
			this->pb_granjero33->Name = L"pb_granjero33";
			this->pb_granjero33->Size = System::Drawing::Size(46, 72);
			this->pb_granjero33->TabIndex = 114;
			this->pb_granjero33->TabStop = false;
			// 
			// pb_granjero34
			// 
			this->pb_granjero34->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero34->Location = System::Drawing::Point(638, 532);
			this->pb_granjero34->Name = L"pb_granjero34";
			this->pb_granjero34->Size = System::Drawing::Size(46, 72);
			this->pb_granjero34->TabIndex = 115;
			this->pb_granjero34->TabStop = false;
			// 
			// pb_granjero35
			// 
			this->pb_granjero35->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero35->Location = System::Drawing::Point(764, 532);
			this->pb_granjero35->Name = L"pb_granjero35";
			this->pb_granjero35->Size = System::Drawing::Size(46, 72);
			this->pb_granjero35->TabIndex = 116;
			this->pb_granjero35->TabStop = false;
			// 
			// pb_granjero36
			// 
			this->pb_granjero36->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero36->Location = System::Drawing::Point(890, 532);
			this->pb_granjero36->Name = L"pb_granjero36";
			this->pb_granjero36->Size = System::Drawing::Size(46, 72);
			this->pb_granjero36->TabIndex = 117;
			this->pb_granjero36->TabStop = false;
			// 
			// pb_granjero37
			// 
			this->pb_granjero37->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero37->Location = System::Drawing::Point(1016, 532);
			this->pb_granjero37->Name = L"pb_granjero37";
			this->pb_granjero37->Size = System::Drawing::Size(46, 72);
			this->pb_granjero37->TabIndex = 118;
			this->pb_granjero37->TabStop = false;
			// 
			// pb_granjero41
			// 
			this->pb_granjero41->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero41->Location = System::Drawing::Point(260, 658);
			this->pb_granjero41->Name = L"pb_granjero41";
			this->pb_granjero41->Size = System::Drawing::Size(46, 72);
			this->pb_granjero41->TabIndex = 119;
			this->pb_granjero41->TabStop = false;
			// 
			// pb_granjero42
			// 
			this->pb_granjero42->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero42->Location = System::Drawing::Point(386, 658);
			this->pb_granjero42->Name = L"pb_granjero42";
			this->pb_granjero42->Size = System::Drawing::Size(46, 72);
			this->pb_granjero42->TabIndex = 120;
			this->pb_granjero42->TabStop = false;
			// 
			// pb_granjero43
			// 
			this->pb_granjero43->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero43->Location = System::Drawing::Point(512, 658);
			this->pb_granjero43->Name = L"pb_granjero43";
			this->pb_granjero43->Size = System::Drawing::Size(46, 72);
			this->pb_granjero43->TabIndex = 121;
			this->pb_granjero43->TabStop = false;
			// 
			// pb_granjero44
			// 
			this->pb_granjero44->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero44->Location = System::Drawing::Point(638, 658);
			this->pb_granjero44->Name = L"pb_granjero44";
			this->pb_granjero44->Size = System::Drawing::Size(46, 72);
			this->pb_granjero44->TabIndex = 122;
			this->pb_granjero44->TabStop = false;
			// 
			// pb_granjero45
			// 
			this->pb_granjero45->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero45->Location = System::Drawing::Point(764, 659);
			this->pb_granjero45->Name = L"pb_granjero45";
			this->pb_granjero45->Size = System::Drawing::Size(46, 72);
			this->pb_granjero45->TabIndex = 123;
			this->pb_granjero45->TabStop = false;
			// 
			// pb_granjero46
			// 
			this->pb_granjero46->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero46->Location = System::Drawing::Point(890, 658);
			this->pb_granjero46->Name = L"pb_granjero46";
			this->pb_granjero46->Size = System::Drawing::Size(46, 72);
			this->pb_granjero46->TabIndex = 124;
			this->pb_granjero46->TabStop = false;
			// 
			// pb_granjero47
			// 
			this->pb_granjero47->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero47->Location = System::Drawing::Point(1016, 659);
			this->pb_granjero47->Name = L"pb_granjero47";
			this->pb_granjero47->Size = System::Drawing::Size(46, 72);
			this->pb_granjero47->TabIndex = 125;
			this->pb_granjero47->TabStop = false;
			// 
			// pb_granjero51
			// 
			this->pb_granjero51->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero51->Location = System::Drawing::Point(260, 784);
			this->pb_granjero51->Name = L"pb_granjero51";
			this->pb_granjero51->Size = System::Drawing::Size(46, 72);
			this->pb_granjero51->TabIndex = 126;
			this->pb_granjero51->TabStop = false;
			// 
			// pb_granjero52
			// 
			this->pb_granjero52->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero52->Location = System::Drawing::Point(386, 785);
			this->pb_granjero52->Name = L"pb_granjero52";
			this->pb_granjero52->Size = System::Drawing::Size(46, 72);
			this->pb_granjero52->TabIndex = 127;
			this->pb_granjero52->TabStop = false;
			// 
			// pb_granjero53
			// 
			this->pb_granjero53->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero53->Location = System::Drawing::Point(512, 784);
			this->pb_granjero53->Name = L"pb_granjero53";
			this->pb_granjero53->Size = System::Drawing::Size(46, 72);
			this->pb_granjero53->TabIndex = 128;
			this->pb_granjero53->TabStop = false;
			// 
			// pb_granjero54
			// 
			this->pb_granjero54->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero54->Location = System::Drawing::Point(638, 784);
			this->pb_granjero54->Name = L"pb_granjero54";
			this->pb_granjero54->Size = System::Drawing::Size(46, 72);
			this->pb_granjero54->TabIndex = 129;
			this->pb_granjero54->TabStop = false;
			// 
			// pb_granjero55
			// 
			this->pb_granjero55->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero55->Location = System::Drawing::Point(764, 784);
			this->pb_granjero55->Name = L"pb_granjero55";
			this->pb_granjero55->Size = System::Drawing::Size(46, 72);
			this->pb_granjero55->TabIndex = 130;
			this->pb_granjero55->TabStop = false;
			// 
			// pb_granjero56
			// 
			this->pb_granjero56->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero56->Location = System::Drawing::Point(890, 785);
			this->pb_granjero56->Name = L"pb_granjero56";
			this->pb_granjero56->Size = System::Drawing::Size(46, 72);
			this->pb_granjero56->TabIndex = 131;
			this->pb_granjero56->TabStop = false;
			// 
			// pb_granjero57
			// 
			this->pb_granjero57->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero57->Location = System::Drawing::Point(1016, 784);
			this->pb_granjero57->Name = L"pb_granjero57";
			this->pb_granjero57->Size = System::Drawing::Size(46, 72);
			this->pb_granjero57->TabIndex = 132;
			this->pb_granjero57->TabStop = false;
			// 
			// pb_granjero61
			// 
			this->pb_granjero61->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero61->Location = System::Drawing::Point(260, 910);
			this->pb_granjero61->Name = L"pb_granjero61";
			this->pb_granjero61->Size = System::Drawing::Size(46, 72);
			this->pb_granjero61->TabIndex = 133;
			this->pb_granjero61->TabStop = false;
			// 
			// pb_granjero62
			// 
			this->pb_granjero62->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero62->Location = System::Drawing::Point(386, 910);
			this->pb_granjero62->Name = L"pb_granjero62";
			this->pb_granjero62->Size = System::Drawing::Size(46, 72);
			this->pb_granjero62->TabIndex = 134;
			this->pb_granjero62->TabStop = false;
			// 
			// pb_granjero63
			// 
			this->pb_granjero63->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero63->Location = System::Drawing::Point(512, 910);
			this->pb_granjero63->Name = L"pb_granjero63";
			this->pb_granjero63->Size = System::Drawing::Size(46, 72);
			this->pb_granjero63->TabIndex = 135;
			this->pb_granjero63->TabStop = false;
			// 
			// pb_granjero64
			// 
			this->pb_granjero64->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero64->Location = System::Drawing::Point(638, 910);
			this->pb_granjero64->Name = L"pb_granjero64";
			this->pb_granjero64->Size = System::Drawing::Size(46, 72);
			this->pb_granjero64->TabIndex = 136;
			this->pb_granjero64->TabStop = false;
			// 
			// pb_granjero65
			// 
			this->pb_granjero65->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero65->Location = System::Drawing::Point(764, 910);
			this->pb_granjero65->Name = L"pb_granjero65";
			this->pb_granjero65->Size = System::Drawing::Size(46, 72);
			this->pb_granjero65->TabIndex = 137;
			this->pb_granjero65->TabStop = false;
			// 
			// pb_granjero66
			// 
			this->pb_granjero66->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero66->Location = System::Drawing::Point(890, 911);
			this->pb_granjero66->Name = L"pb_granjero66";
			this->pb_granjero66->Size = System::Drawing::Size(46, 72);
			this->pb_granjero66->TabIndex = 138;
			this->pb_granjero66->TabStop = false;
			// 
			// pb_granjero67
			// 
			this->pb_granjero67->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero67->Location = System::Drawing::Point(1016, 910);
			this->pb_granjero67->Name = L"pb_granjero67";
			this->pb_granjero67->Size = System::Drawing::Size(46, 72);
			this->pb_granjero67->TabIndex = 139;
			this->pb_granjero67->TabStop = false;
			// 
			// pb_granjero71
			// 
			this->pb_granjero71->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero71->Location = System::Drawing::Point(260, 1036);
			this->pb_granjero71->Name = L"pb_granjero71";
			this->pb_granjero71->Size = System::Drawing::Size(46, 72);
			this->pb_granjero71->TabIndex = 140;
			this->pb_granjero71->TabStop = false;
			// 
			// pb_granjero72
			// 
			this->pb_granjero72->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero72->Location = System::Drawing::Point(386, 1036);
			this->pb_granjero72->Name = L"pb_granjero72";
			this->pb_granjero72->Size = System::Drawing::Size(46, 72);
			this->pb_granjero72->TabIndex = 141;
			this->pb_granjero72->TabStop = false;
			// 
			// pb_granjero77
			// 
			this->pb_granjero77->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero77->Location = System::Drawing::Point(1016, 1036);
			this->pb_granjero77->Name = L"pb_granjero77";
			this->pb_granjero77->Size = System::Drawing::Size(46, 72);
			this->pb_granjero77->TabIndex = 142;
			this->pb_granjero77->TabStop = false;
			// 
			// pb_granjero76
			// 
			this->pb_granjero76->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero76->Location = System::Drawing::Point(890, 1036);
			this->pb_granjero76->Name = L"pb_granjero76";
			this->pb_granjero76->Size = System::Drawing::Size(46, 72);
			this->pb_granjero76->TabIndex = 143;
			this->pb_granjero76->TabStop = false;
			// 
			// pb_granjero75
			// 
			this->pb_granjero75->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero75->Location = System::Drawing::Point(764, 1036);
			this->pb_granjero75->Name = L"pb_granjero75";
			this->pb_granjero75->Size = System::Drawing::Size(46, 72);
			this->pb_granjero75->TabIndex = 144;
			this->pb_granjero75->TabStop = false;
			// 
			// pb_granjero74
			// 
			this->pb_granjero74->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero74->Location = System::Drawing::Point(638, 1036);
			this->pb_granjero74->Name = L"pb_granjero74";
			this->pb_granjero74->Size = System::Drawing::Size(46, 72);
			this->pb_granjero74->TabIndex = 145;
			this->pb_granjero74->TabStop = false;
			// 
			// pb_granjero73
			// 
			this->pb_granjero73->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_granjero73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_granjero73->Location = System::Drawing::Point(512, 1036);
			this->pb_granjero73->Name = L"pb_granjero73";
			this->pb_granjero73->Size = System::Drawing::Size(46, 72);
			this->pb_granjero73->TabIndex = 146;
			this->pb_granjero73->TabStop = false;
			// 
			// pb_plaga11
			// 
			this->pb_plaga11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga11->Location = System::Drawing::Point(186, 233);
			this->pb_plaga11->Name = L"pb_plaga11";
			this->pb_plaga11->Size = System::Drawing::Size(46, 50);
			this->pb_plaga11->TabIndex = 147;
			this->pb_plaga11->TabStop = false;
			// 
			// pb_espanta17
			// 
			this->pb_espanta17->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta17->Location = System::Drawing::Point(1016, 233);
			this->pb_espanta17->Name = L"pb_espanta17";
			this->pb_espanta17->Size = System::Drawing::Size(46, 50);
			this->pb_espanta17->TabIndex = 148;
			this->pb_espanta17->TabStop = false;
			// 
			// pb_plaga17
			// 
			this->pb_plaga17->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga17->Location = System::Drawing::Point(942, 233);
			this->pb_plaga17->Name = L"pb_plaga17";
			this->pb_plaga17->Size = System::Drawing::Size(46, 50);
			this->pb_plaga17->TabIndex = 149;
			this->pb_plaga17->TabStop = false;
			// 
			// pb_espanta16
			// 
			this->pb_espanta16->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta16->Location = System::Drawing::Point(890, 233);
			this->pb_espanta16->Name = L"pb_espanta16";
			this->pb_espanta16->Size = System::Drawing::Size(46, 50);
			this->pb_espanta16->TabIndex = 150;
			this->pb_espanta16->TabStop = false;
			// 
			// pb_plaga16
			// 
			this->pb_plaga16->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga16->Location = System::Drawing::Point(816, 233);
			this->pb_plaga16->Name = L"pb_plaga16";
			this->pb_plaga16->Size = System::Drawing::Size(46, 50);
			this->pb_plaga16->TabIndex = 151;
			this->pb_plaga16->TabStop = false;
			// 
			// pb_espanta15
			// 
			this->pb_espanta15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta15->Location = System::Drawing::Point(764, 233);
			this->pb_espanta15->Name = L"pb_espanta15";
			this->pb_espanta15->Size = System::Drawing::Size(46, 50);
			this->pb_espanta15->TabIndex = 152;
			this->pb_espanta15->TabStop = false;
			// 
			// pb_plaga15
			// 
			this->pb_plaga15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga15->Location = System::Drawing::Point(690, 233);
			this->pb_plaga15->Name = L"pb_plaga15";
			this->pb_plaga15->Size = System::Drawing::Size(46, 50);
			this->pb_plaga15->TabIndex = 153;
			this->pb_plaga15->TabStop = false;
			// 
			// pb_espanta14
			// 
			this->pb_espanta14->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta14->Location = System::Drawing::Point(638, 233);
			this->pb_espanta14->Name = L"pb_espanta14";
			this->pb_espanta14->Size = System::Drawing::Size(46, 50);
			this->pb_espanta14->TabIndex = 154;
			this->pb_espanta14->TabStop = false;
			// 
			// pb_plaga14
			// 
			this->pb_plaga14->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga14->Location = System::Drawing::Point(564, 233);
			this->pb_plaga14->Name = L"pb_plaga14";
			this->pb_plaga14->Size = System::Drawing::Size(46, 50);
			this->pb_plaga14->TabIndex = 155;
			this->pb_plaga14->TabStop = false;
			// 
			// pb_espanta13
			// 
			this->pb_espanta13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta13->Location = System::Drawing::Point(512, 233);
			this->pb_espanta13->Name = L"pb_espanta13";
			this->pb_espanta13->Size = System::Drawing::Size(46, 50);
			this->pb_espanta13->TabIndex = 156;
			this->pb_espanta13->TabStop = false;
			// 
			// pb_plaga13
			// 
			this->pb_plaga13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga13->Location = System::Drawing::Point(438, 233);
			this->pb_plaga13->Name = L"pb_plaga13";
			this->pb_plaga13->Size = System::Drawing::Size(46, 50);
			this->pb_plaga13->TabIndex = 157;
			this->pb_plaga13->TabStop = false;
			// 
			// pb_espanta12
			// 
			this->pb_espanta12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta12->Location = System::Drawing::Point(386, 233);
			this->pb_espanta12->Name = L"pb_espanta12";
			this->pb_espanta12->Size = System::Drawing::Size(46, 50);
			this->pb_espanta12->TabIndex = 158;
			this->pb_espanta12->TabStop = false;
			// 
			// pb_plaga12
			// 
			this->pb_plaga12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga12->Location = System::Drawing::Point(312, 233);
			this->pb_plaga12->Name = L"pb_plaga12";
			this->pb_plaga12->Size = System::Drawing::Size(46, 50);
			this->pb_plaga12->TabIndex = 159;
			this->pb_plaga12->TabStop = false;
			// 
			// pb_espanta11
			// 
			this->pb_espanta11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta11->Location = System::Drawing::Point(260, 233);
			this->pb_espanta11->Name = L"pb_espanta11";
			this->pb_espanta11->Size = System::Drawing::Size(46, 50);
			this->pb_espanta11->TabIndex = 160;
			this->pb_espanta11->TabStop = false;
			// 
			// pb_espanta27
			// 
			this->pb_espanta27->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta27->Location = System::Drawing::Point(1016, 359);
			this->pb_espanta27->Name = L"pb_espanta27";
			this->pb_espanta27->Size = System::Drawing::Size(46, 50);
			this->pb_espanta27->TabIndex = 161;
			this->pb_espanta27->TabStop = false;
			// 
			// pb_plaga27
			// 
			this->pb_plaga27->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga27->Location = System::Drawing::Point(942, 359);
			this->pb_plaga27->Name = L"pb_plaga27";
			this->pb_plaga27->Size = System::Drawing::Size(46, 50);
			this->pb_plaga27->TabIndex = 162;
			this->pb_plaga27->TabStop = false;
			// 
			// pb_espanta26
			// 
			this->pb_espanta26->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta26->Location = System::Drawing::Point(890, 358);
			this->pb_espanta26->Name = L"pb_espanta26";
			this->pb_espanta26->Size = System::Drawing::Size(46, 50);
			this->pb_espanta26->TabIndex = 163;
			this->pb_espanta26->TabStop = false;
			// 
			// pb_plaga26
			// 
			this->pb_plaga26->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga26->Location = System::Drawing::Point(816, 359);
			this->pb_plaga26->Name = L"pb_plaga26";
			this->pb_plaga26->Size = System::Drawing::Size(46, 50);
			this->pb_plaga26->TabIndex = 164;
			this->pb_plaga26->TabStop = false;
			// 
			// pb_espanta25
			// 
			this->pb_espanta25->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta25->Location = System::Drawing::Point(764, 359);
			this->pb_espanta25->Name = L"pb_espanta25";
			this->pb_espanta25->Size = System::Drawing::Size(46, 50);
			this->pb_espanta25->TabIndex = 165;
			this->pb_espanta25->TabStop = false;
			// 
			// pb_plaga25
			// 
			this->pb_plaga25->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga25->Location = System::Drawing::Point(690, 359);
			this->pb_plaga25->Name = L"pb_plaga25";
			this->pb_plaga25->Size = System::Drawing::Size(46, 50);
			this->pb_plaga25->TabIndex = 166;
			this->pb_plaga25->TabStop = false;
			// 
			// pb_espanta24
			// 
			this->pb_espanta24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta24->Location = System::Drawing::Point(638, 359);
			this->pb_espanta24->Name = L"pb_espanta24";
			this->pb_espanta24->Size = System::Drawing::Size(46, 50);
			this->pb_espanta24->TabIndex = 167;
			this->pb_espanta24->TabStop = false;
			// 
			// pb_plaga24
			// 
			this->pb_plaga24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga24->Location = System::Drawing::Point(564, 359);
			this->pb_plaga24->Name = L"pb_plaga24";
			this->pb_plaga24->Size = System::Drawing::Size(46, 50);
			this->pb_plaga24->TabIndex = 168;
			this->pb_plaga24->TabStop = false;
			// 
			// pb_espanta23
			// 
			this->pb_espanta23->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta23->Location = System::Drawing::Point(512, 359);
			this->pb_espanta23->Name = L"pb_espanta23";
			this->pb_espanta23->Size = System::Drawing::Size(46, 50);
			this->pb_espanta23->TabIndex = 169;
			this->pb_espanta23->TabStop = false;
			// 
			// pb_plaga23
			// 
			this->pb_plaga23->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga23->Location = System::Drawing::Point(438, 359);
			this->pb_plaga23->Name = L"pb_plaga23";
			this->pb_plaga23->Size = System::Drawing::Size(46, 50);
			this->pb_plaga23->TabIndex = 170;
			this->pb_plaga23->TabStop = false;
			// 
			// pb_espanta22
			// 
			this->pb_espanta22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta22->Location = System::Drawing::Point(386, 359);
			this->pb_espanta22->Name = L"pb_espanta22";
			this->pb_espanta22->Size = System::Drawing::Size(46, 50);
			this->pb_espanta22->TabIndex = 171;
			this->pb_espanta22->TabStop = false;
			// 
			// pb_plaga22
			// 
			this->pb_plaga22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga22->Location = System::Drawing::Point(312, 359);
			this->pb_plaga22->Name = L"pb_plaga22";
			this->pb_plaga22->Size = System::Drawing::Size(46, 50);
			this->pb_plaga22->TabIndex = 172;
			this->pb_plaga22->TabStop = false;
			// 
			// pb_espanta21
			// 
			this->pb_espanta21->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta21->Location = System::Drawing::Point(260, 359);
			this->pb_espanta21->Name = L"pb_espanta21";
			this->pb_espanta21->Size = System::Drawing::Size(46, 50);
			this->pb_espanta21->TabIndex = 173;
			this->pb_espanta21->TabStop = false;
			// 
			// pb_plaga21
			// 
			this->pb_plaga21->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga21->Location = System::Drawing::Point(186, 359);
			this->pb_plaga21->Name = L"pb_plaga21";
			this->pb_plaga21->Size = System::Drawing::Size(46, 50);
			this->pb_plaga21->TabIndex = 174;
			this->pb_plaga21->TabStop = false;
			// 
			// pb_espanta45
			// 
			this->pb_espanta45->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta45->Location = System::Drawing::Point(764, 611);
			this->pb_espanta45->Name = L"pb_espanta45";
			this->pb_espanta45->Size = System::Drawing::Size(46, 50);
			this->pb_espanta45->TabIndex = 175;
			this->pb_espanta45->TabStop = false;
			// 
			// pb_plaga45
			// 
			this->pb_plaga45->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga45->Location = System::Drawing::Point(690, 611);
			this->pb_plaga45->Name = L"pb_plaga45";
			this->pb_plaga45->Size = System::Drawing::Size(46, 50);
			this->pb_plaga45->TabIndex = 176;
			this->pb_plaga45->TabStop = false;
			// 
			// pb_espanta46
			// 
			this->pb_espanta46->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta46->Location = System::Drawing::Point(890, 610);
			this->pb_espanta46->Name = L"pb_espanta46";
			this->pb_espanta46->Size = System::Drawing::Size(46, 50);
			this->pb_espanta46->TabIndex = 177;
			this->pb_espanta46->TabStop = false;
			// 
			// pb_plaga46
			// 
			this->pb_plaga46->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga46->Location = System::Drawing::Point(816, 611);
			this->pb_plaga46->Name = L"pb_plaga46";
			this->pb_plaga46->Size = System::Drawing::Size(46, 50);
			this->pb_plaga46->TabIndex = 178;
			this->pb_plaga46->TabStop = false;
			// 
			// pb_espanta47
			// 
			this->pb_espanta47->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta47->Location = System::Drawing::Point(1016, 611);
			this->pb_espanta47->Name = L"pb_espanta47";
			this->pb_espanta47->Size = System::Drawing::Size(46, 50);
			this->pb_espanta47->TabIndex = 179;
			this->pb_espanta47->TabStop = false;
			// 
			// pb_plaga47
			// 
			this->pb_plaga47->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga47->Location = System::Drawing::Point(942, 610);
			this->pb_plaga47->Name = L"pb_plaga47";
			this->pb_plaga47->Size = System::Drawing::Size(46, 50);
			this->pb_plaga47->TabIndex = 180;
			this->pb_plaga47->TabStop = false;
			// 
			// pb_espanta44
			// 
			this->pb_espanta44->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta44->Location = System::Drawing::Point(638, 611);
			this->pb_espanta44->Name = L"pb_espanta44";
			this->pb_espanta44->Size = System::Drawing::Size(46, 50);
			this->pb_espanta44->TabIndex = 181;
			this->pb_espanta44->TabStop = false;
			// 
			// pb_plaga44
			// 
			this->pb_plaga44->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga44->Location = System::Drawing::Point(564, 611);
			this->pb_plaga44->Name = L"pb_plaga44";
			this->pb_plaga44->Size = System::Drawing::Size(46, 50);
			this->pb_plaga44->TabIndex = 182;
			this->pb_plaga44->TabStop = false;
			// 
			// pb_espanta43
			// 
			this->pb_espanta43->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta43->Location = System::Drawing::Point(512, 610);
			this->pb_espanta43->Name = L"pb_espanta43";
			this->pb_espanta43->Size = System::Drawing::Size(46, 50);
			this->pb_espanta43->TabIndex = 183;
			this->pb_espanta43->TabStop = false;
			// 
			// pb_plaga43
			// 
			this->pb_plaga43->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga43->Location = System::Drawing::Point(438, 611);
			this->pb_plaga43->Name = L"pb_plaga43";
			this->pb_plaga43->Size = System::Drawing::Size(46, 50);
			this->pb_plaga43->TabIndex = 184;
			this->pb_plaga43->TabStop = false;
			// 
			// pb_espanta42
			// 
			this->pb_espanta42->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta42->Location = System::Drawing::Point(386, 610);
			this->pb_espanta42->Name = L"pb_espanta42";
			this->pb_espanta42->Size = System::Drawing::Size(46, 50);
			this->pb_espanta42->TabIndex = 185;
			this->pb_espanta42->TabStop = false;
			// 
			// pb_plaga42
			// 
			this->pb_plaga42->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga42->Location = System::Drawing::Point(312, 611);
			this->pb_plaga42->Name = L"pb_plaga42";
			this->pb_plaga42->Size = System::Drawing::Size(46, 50);
			this->pb_plaga42->TabIndex = 186;
			this->pb_plaga42->TabStop = false;
			// 
			// pb_espanta41
			// 
			this->pb_espanta41->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta41->Location = System::Drawing::Point(260, 611);
			this->pb_espanta41->Name = L"pb_espanta41";
			this->pb_espanta41->Size = System::Drawing::Size(46, 50);
			this->pb_espanta41->TabIndex = 187;
			this->pb_espanta41->TabStop = false;
			// 
			// pb_plaga41
			// 
			this->pb_plaga41->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga41->Location = System::Drawing::Point(186, 611);
			this->pb_plaga41->Name = L"pb_plaga41";
			this->pb_plaga41->Size = System::Drawing::Size(46, 50);
			this->pb_plaga41->TabIndex = 188;
			this->pb_plaga41->TabStop = false;
			// 
			// pb_espanta37
			// 
			this->pb_espanta37->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta37->Location = System::Drawing::Point(1016, 485);
			this->pb_espanta37->Name = L"pb_espanta37";
			this->pb_espanta37->Size = System::Drawing::Size(46, 50);
			this->pb_espanta37->TabIndex = 189;
			this->pb_espanta37->TabStop = false;
			// 
			// pb_plaga37
			// 
			this->pb_plaga37->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga37->Location = System::Drawing::Point(942, 486);
			this->pb_plaga37->Name = L"pb_plaga37";
			this->pb_plaga37->Size = System::Drawing::Size(46, 50);
			this->pb_plaga37->TabIndex = 190;
			this->pb_plaga37->TabStop = false;
			// 
			// pb_espanta36
			// 
			this->pb_espanta36->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta36->Location = System::Drawing::Point(890, 484);
			this->pb_espanta36->Name = L"pb_espanta36";
			this->pb_espanta36->Size = System::Drawing::Size(46, 50);
			this->pb_espanta36->TabIndex = 191;
			this->pb_espanta36->TabStop = false;
			// 
			// pb_plaga36
			// 
			this->pb_plaga36->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga36->Location = System::Drawing::Point(816, 485);
			this->pb_plaga36->Name = L"pb_plaga36";
			this->pb_plaga36->Size = System::Drawing::Size(46, 50);
			this->pb_plaga36->TabIndex = 192;
			this->pb_plaga36->TabStop = false;
			// 
			// pb_espanta35
			// 
			this->pb_espanta35->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta35->Location = System::Drawing::Point(764, 486);
			this->pb_espanta35->Name = L"pb_espanta35";
			this->pb_espanta35->Size = System::Drawing::Size(46, 50);
			this->pb_espanta35->TabIndex = 193;
			this->pb_espanta35->TabStop = false;
			// 
			// pb_plaga35
			// 
			this->pb_plaga35->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga35->Location = System::Drawing::Point(690, 485);
			this->pb_plaga35->Name = L"pb_plaga35";
			this->pb_plaga35->Size = System::Drawing::Size(46, 50);
			this->pb_plaga35->TabIndex = 194;
			this->pb_plaga35->TabStop = false;
			// 
			// pb_espanta34
			// 
			this->pb_espanta34->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta34->Location = System::Drawing::Point(638, 486);
			this->pb_espanta34->Name = L"pb_espanta34";
			this->pb_espanta34->Size = System::Drawing::Size(46, 50);
			this->pb_espanta34->TabIndex = 195;
			this->pb_espanta34->TabStop = false;
			// 
			// pb_plaga34
			// 
			this->pb_plaga34->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga34->Location = System::Drawing::Point(564, 485);
			this->pb_plaga34->Name = L"pb_plaga34";
			this->pb_plaga34->Size = System::Drawing::Size(46, 50);
			this->pb_plaga34->TabIndex = 196;
			this->pb_plaga34->TabStop = false;
			// 
			// pb_espanta33
			// 
			this->pb_espanta33->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta33->Location = System::Drawing::Point(512, 485);
			this->pb_espanta33->Name = L"pb_espanta33";
			this->pb_espanta33->Size = System::Drawing::Size(46, 50);
			this->pb_espanta33->TabIndex = 197;
			this->pb_espanta33->TabStop = false;
			// 
			// pb_plaga33
			// 
			this->pb_plaga33->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga33->Location = System::Drawing::Point(438, 485);
			this->pb_plaga33->Name = L"pb_plaga33";
			this->pb_plaga33->Size = System::Drawing::Size(46, 50);
			this->pb_plaga33->TabIndex = 198;
			this->pb_plaga33->TabStop = false;
			// 
			// pb_espanta32
			// 
			this->pb_espanta32->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta32->Location = System::Drawing::Point(386, 485);
			this->pb_espanta32->Name = L"pb_espanta32";
			this->pb_espanta32->Size = System::Drawing::Size(46, 50);
			this->pb_espanta32->TabIndex = 199;
			this->pb_espanta32->TabStop = false;
			// 
			// pb_plaga32
			// 
			this->pb_plaga32->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga32->Location = System::Drawing::Point(312, 485);
			this->pb_plaga32->Name = L"pb_plaga32";
			this->pb_plaga32->Size = System::Drawing::Size(46, 50);
			this->pb_plaga32->TabIndex = 200;
			this->pb_plaga32->TabStop = false;
			// 
			// pb_espanta31
			// 
			this->pb_espanta31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta31->Location = System::Drawing::Point(260, 485);
			this->pb_espanta31->Name = L"pb_espanta31";
			this->pb_espanta31->Size = System::Drawing::Size(46, 50);
			this->pb_espanta31->TabIndex = 201;
			this->pb_espanta31->TabStop = false;
			// 
			// pb_plaga31
			// 
			this->pb_plaga31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga31->Location = System::Drawing::Point(186, 485);
			this->pb_plaga31->Name = L"pb_plaga31";
			this->pb_plaga31->Size = System::Drawing::Size(46, 50);
			this->pb_plaga31->TabIndex = 202;
			this->pb_plaga31->TabStop = false;
			// 
			// pb_espanta56
			// 
			this->pb_espanta56->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta56->Location = System::Drawing::Point(890, 737);
			this->pb_espanta56->Name = L"pb_espanta56";
			this->pb_espanta56->Size = System::Drawing::Size(46, 50);
			this->pb_espanta56->TabIndex = 203;
			this->pb_espanta56->TabStop = false;
			// 
			// pb_plaga56
			// 
			this->pb_plaga56->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga56->Location = System::Drawing::Point(816, 737);
			this->pb_plaga56->Name = L"pb_plaga56";
			this->pb_plaga56->Size = System::Drawing::Size(46, 50);
			this->pb_plaga56->TabIndex = 204;
			this->pb_plaga56->TabStop = false;
			// 
			// pb_espanta55
			// 
			this->pb_espanta55->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta55->Location = System::Drawing::Point(764, 737);
			this->pb_espanta55->Name = L"pb_espanta55";
			this->pb_espanta55->Size = System::Drawing::Size(46, 50);
			this->pb_espanta55->TabIndex = 205;
			this->pb_espanta55->TabStop = false;
			// 
			// pb_plaga55
			// 
			this->pb_plaga55->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga55->Location = System::Drawing::Point(690, 737);
			this->pb_plaga55->Name = L"pb_plaga55";
			this->pb_plaga55->Size = System::Drawing::Size(46, 50);
			this->pb_plaga55->TabIndex = 206;
			this->pb_plaga55->TabStop = false;
			// 
			// pb_espanta54
			// 
			this->pb_espanta54->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta54->Location = System::Drawing::Point(638, 737);
			this->pb_espanta54->Name = L"pb_espanta54";
			this->pb_espanta54->Size = System::Drawing::Size(46, 50);
			this->pb_espanta54->TabIndex = 207;
			this->pb_espanta54->TabStop = false;
			// 
			// pb_plaga54
			// 
			this->pb_plaga54->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga54->Location = System::Drawing::Point(564, 737);
			this->pb_plaga54->Name = L"pb_plaga54";
			this->pb_plaga54->Size = System::Drawing::Size(46, 50);
			this->pb_plaga54->TabIndex = 208;
			this->pb_plaga54->TabStop = false;
			// 
			// pb_espanta53
			// 
			this->pb_espanta53->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta53->Location = System::Drawing::Point(512, 737);
			this->pb_espanta53->Name = L"pb_espanta53";
			this->pb_espanta53->Size = System::Drawing::Size(46, 50);
			this->pb_espanta53->TabIndex = 209;
			this->pb_espanta53->TabStop = false;
			// 
			// pb_plaga53
			// 
			this->pb_plaga53->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga53->Location = System::Drawing::Point(438, 737);
			this->pb_plaga53->Name = L"pb_plaga53";
			this->pb_plaga53->Size = System::Drawing::Size(46, 50);
			this->pb_plaga53->TabIndex = 210;
			this->pb_plaga53->TabStop = false;
			// 
			// pb_espanta52
			// 
			this->pb_espanta52->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta52->Location = System::Drawing::Point(386, 737);
			this->pb_espanta52->Name = L"pb_espanta52";
			this->pb_espanta52->Size = System::Drawing::Size(46, 50);
			this->pb_espanta52->TabIndex = 211;
			this->pb_espanta52->TabStop = false;
			// 
			// pb_plaga52
			// 
			this->pb_plaga52->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga52->Location = System::Drawing::Point(312, 737);
			this->pb_plaga52->Name = L"pb_plaga52";
			this->pb_plaga52->Size = System::Drawing::Size(46, 50);
			this->pb_plaga52->TabIndex = 212;
			this->pb_plaga52->TabStop = false;
			// 
			// pb_espanta51
			// 
			this->pb_espanta51->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta51->Location = System::Drawing::Point(260, 737);
			this->pb_espanta51->Name = L"pb_espanta51";
			this->pb_espanta51->Size = System::Drawing::Size(46, 50);
			this->pb_espanta51->TabIndex = 213;
			this->pb_espanta51->TabStop = false;
			// 
			// pb_plaga51
			// 
			this->pb_plaga51->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga51->Location = System::Drawing::Point(186, 737);
			this->pb_plaga51->Name = L"pb_plaga51";
			this->pb_plaga51->Size = System::Drawing::Size(46, 50);
			this->pb_plaga51->TabIndex = 214;
			this->pb_plaga51->TabStop = false;
			// 
			// pb_plaga61
			// 
			this->pb_plaga61->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga61->Location = System::Drawing::Point(186, 863);
			this->pb_plaga61->Name = L"pb_plaga61";
			this->pb_plaga61->Size = System::Drawing::Size(46, 50);
			this->pb_plaga61->TabIndex = 215;
			this->pb_plaga61->TabStop = false;
			// 
			// pb_espanta57
			// 
			this->pb_espanta57->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta57->Location = System::Drawing::Point(1016, 737);
			this->pb_espanta57->Name = L"pb_espanta57";
			this->pb_espanta57->Size = System::Drawing::Size(46, 50);
			this->pb_espanta57->TabIndex = 216;
			this->pb_espanta57->TabStop = false;
			// 
			// pb_plaga57
			// 
			this->pb_plaga57->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga57->Location = System::Drawing::Point(942, 736);
			this->pb_plaga57->Name = L"pb_plaga57";
			this->pb_plaga57->Size = System::Drawing::Size(46, 50);
			this->pb_plaga57->TabIndex = 217;
			this->pb_plaga57->TabStop = false;
			// 
			// pb_espanta67
			// 
			this->pb_espanta67->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta67->Location = System::Drawing::Point(1016, 863);
			this->pb_espanta67->Name = L"pb_espanta67";
			this->pb_espanta67->Size = System::Drawing::Size(46, 50);
			this->pb_espanta67->TabIndex = 218;
			this->pb_espanta67->TabStop = false;
			// 
			// pb_plaga67
			// 
			this->pb_plaga67->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga67->Location = System::Drawing::Point(942, 863);
			this->pb_plaga67->Name = L"pb_plaga67";
			this->pb_plaga67->Size = System::Drawing::Size(46, 50);
			this->pb_plaga67->TabIndex = 219;
			this->pb_plaga67->TabStop = false;
			// 
			// pb_espanta66
			// 
			this->pb_espanta66->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta66->Location = System::Drawing::Point(890, 862);
			this->pb_espanta66->Name = L"pb_espanta66";
			this->pb_espanta66->Size = System::Drawing::Size(46, 50);
			this->pb_espanta66->TabIndex = 220;
			this->pb_espanta66->TabStop = false;
			// 
			// pb_plaga66
			// 
			this->pb_plaga66->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga66->Location = System::Drawing::Point(816, 862);
			this->pb_plaga66->Name = L"pb_plaga66";
			this->pb_plaga66->Size = System::Drawing::Size(46, 50);
			this->pb_plaga66->TabIndex = 221;
			this->pb_plaga66->TabStop = false;
			// 
			// pb_espanta65
			// 
			this->pb_espanta65->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta65->Location = System::Drawing::Point(764, 862);
			this->pb_espanta65->Name = L"pb_espanta65";
			this->pb_espanta65->Size = System::Drawing::Size(46, 50);
			this->pb_espanta65->TabIndex = 222;
			this->pb_espanta65->TabStop = false;
			// 
			// pb_plaga65
			// 
			this->pb_plaga65->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga65->Location = System::Drawing::Point(690, 863);
			this->pb_plaga65->Name = L"pb_plaga65";
			this->pb_plaga65->Size = System::Drawing::Size(46, 50);
			this->pb_plaga65->TabIndex = 223;
			this->pb_plaga65->TabStop = false;
			// 
			// pb_espanta64
			// 
			this->pb_espanta64->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta64->Location = System::Drawing::Point(638, 863);
			this->pb_espanta64->Name = L"pb_espanta64";
			this->pb_espanta64->Size = System::Drawing::Size(46, 50);
			this->pb_espanta64->TabIndex = 224;
			this->pb_espanta64->TabStop = false;
			// 
			// pb_plaga64
			// 
			this->pb_plaga64->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga64->Location = System::Drawing::Point(564, 863);
			this->pb_plaga64->Name = L"pb_plaga64";
			this->pb_plaga64->Size = System::Drawing::Size(46, 50);
			this->pb_plaga64->TabIndex = 225;
			this->pb_plaga64->TabStop = false;
			// 
			// pb_espanta63
			// 
			this->pb_espanta63->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta63->Location = System::Drawing::Point(512, 863);
			this->pb_espanta63->Name = L"pb_espanta63";
			this->pb_espanta63->Size = System::Drawing::Size(46, 50);
			this->pb_espanta63->TabIndex = 226;
			this->pb_espanta63->TabStop = false;
			// 
			// pb_plaga63
			// 
			this->pb_plaga63->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga63->Location = System::Drawing::Point(438, 863);
			this->pb_plaga63->Name = L"pb_plaga63";
			this->pb_plaga63->Size = System::Drawing::Size(46, 50);
			this->pb_plaga63->TabIndex = 227;
			this->pb_plaga63->TabStop = false;
			// 
			// pb_espanta62
			// 
			this->pb_espanta62->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta62->Location = System::Drawing::Point(386, 863);
			this->pb_espanta62->Name = L"pb_espanta62";
			this->pb_espanta62->Size = System::Drawing::Size(46, 50);
			this->pb_espanta62->TabIndex = 228;
			this->pb_espanta62->TabStop = false;
			// 
			// pb_plaga62
			// 
			this->pb_plaga62->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga62->Location = System::Drawing::Point(312, 863);
			this->pb_plaga62->Name = L"pb_plaga62";
			this->pb_plaga62->Size = System::Drawing::Size(46, 50);
			this->pb_plaga62->TabIndex = 229;
			this->pb_plaga62->TabStop = false;
			// 
			// pb_espanta61
			// 
			this->pb_espanta61->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta61->Location = System::Drawing::Point(260, 863);
			this->pb_espanta61->Name = L"pb_espanta61";
			this->pb_espanta61->Size = System::Drawing::Size(46, 50);
			this->pb_espanta61->TabIndex = 230;
			this->pb_espanta61->TabStop = false;
			// 
			// pb_espanta77
			// 
			this->pb_espanta77->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta77->Location = System::Drawing::Point(1016, 988);
			this->pb_espanta77->Name = L"pb_espanta77";
			this->pb_espanta77->Size = System::Drawing::Size(46, 50);
			this->pb_espanta77->TabIndex = 231;
			this->pb_espanta77->TabStop = false;
			// 
			// pb_plaga77
			// 
			this->pb_plaga77->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga77->Location = System::Drawing::Point(942, 988);
			this->pb_plaga77->Name = L"pb_plaga77";
			this->pb_plaga77->Size = System::Drawing::Size(46, 50);
			this->pb_plaga77->TabIndex = 232;
			this->pb_plaga77->TabStop = false;
			// 
			// pb_espanta76
			// 
			this->pb_espanta76->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta76->Location = System::Drawing::Point(890, 988);
			this->pb_espanta76->Name = L"pb_espanta76";
			this->pb_espanta76->Size = System::Drawing::Size(46, 50);
			this->pb_espanta76->TabIndex = 233;
			this->pb_espanta76->TabStop = false;
			// 
			// pb_plaga76
			// 
			this->pb_plaga76->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga76->Location = System::Drawing::Point(816, 988);
			this->pb_plaga76->Name = L"pb_plaga76";
			this->pb_plaga76->Size = System::Drawing::Size(46, 50);
			this->pb_plaga76->TabIndex = 234;
			this->pb_plaga76->TabStop = false;
			// 
			// pb_espanta75
			// 
			this->pb_espanta75->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta75->Location = System::Drawing::Point(764, 988);
			this->pb_espanta75->Name = L"pb_espanta75";
			this->pb_espanta75->Size = System::Drawing::Size(46, 50);
			this->pb_espanta75->TabIndex = 235;
			this->pb_espanta75->TabStop = false;
			// 
			// pb_plaga75
			// 
			this->pb_plaga75->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga75->Location = System::Drawing::Point(690, 989);
			this->pb_plaga75->Name = L"pb_plaga75";
			this->pb_plaga75->Size = System::Drawing::Size(46, 50);
			this->pb_plaga75->TabIndex = 236;
			this->pb_plaga75->TabStop = false;
			// 
			// pb_espanta74
			// 
			this->pb_espanta74->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta74->Location = System::Drawing::Point(638, 988);
			this->pb_espanta74->Name = L"pb_espanta74";
			this->pb_espanta74->Size = System::Drawing::Size(46, 50);
			this->pb_espanta74->TabIndex = 237;
			this->pb_espanta74->TabStop = false;
			// 
			// pb_plaga74
			// 
			this->pb_plaga74->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga74->Location = System::Drawing::Point(564, 989);
			this->pb_plaga74->Name = L"pb_plaga74";
			this->pb_plaga74->Size = System::Drawing::Size(46, 50);
			this->pb_plaga74->TabIndex = 238;
			this->pb_plaga74->TabStop = false;
			// 
			// pb_espanta73
			// 
			this->pb_espanta73->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta73->Location = System::Drawing::Point(512, 989);
			this->pb_espanta73->Name = L"pb_espanta73";
			this->pb_espanta73->Size = System::Drawing::Size(46, 50);
			this->pb_espanta73->TabIndex = 239;
			this->pb_espanta73->TabStop = false;
			// 
			// pb_plaga73
			// 
			this->pb_plaga73->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga73->Location = System::Drawing::Point(438, 989);
			this->pb_plaga73->Name = L"pb_plaga73";
			this->pb_plaga73->Size = System::Drawing::Size(46, 50);
			this->pb_plaga73->TabIndex = 240;
			this->pb_plaga73->TabStop = false;
			// 
			// pb_espanta72
			// 
			this->pb_espanta72->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta72->Location = System::Drawing::Point(386, 988);
			this->pb_espanta72->Name = L"pb_espanta72";
			this->pb_espanta72->Size = System::Drawing::Size(46, 50);
			this->pb_espanta72->TabIndex = 241;
			this->pb_espanta72->TabStop = false;
			// 
			// pb_plaga72
			// 
			this->pb_plaga72->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga72->Location = System::Drawing::Point(312, 989);
			this->pb_plaga72->Name = L"pb_plaga72";
			this->pb_plaga72->Size = System::Drawing::Size(46, 50);
			this->pb_plaga72->TabIndex = 242;
			this->pb_plaga72->TabStop = false;
			// 
			// pb_espanta71
			// 
			this->pb_espanta71->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_espanta71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_espanta71->Location = System::Drawing::Point(260, 989);
			this->pb_espanta71->Name = L"pb_espanta71";
			this->pb_espanta71->Size = System::Drawing::Size(46, 50);
			this->pb_espanta71->TabIndex = 243;
			this->pb_espanta71->TabStop = false;
			// 
			// pb_plaga71
			// 
			this->pb_plaga71->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->pb_plaga71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_plaga71->Location = System::Drawing::Point(186, 989);
			this->pb_plaga71->Name = L"pb_plaga71";
			this->pb_plaga71->Size = System::Drawing::Size(46, 50);
			this->pb_plaga71->TabIndex = 244;
			this->pb_plaga71->TabStop = false;
			// 
			// lbl_TituloArbol
			// 
			this->lbl_TituloArbol->AutoSize = true;
			this->lbl_TituloArbol->Location = System::Drawing::Point(173, 27);
			this->lbl_TituloArbol->Name = L"lbl_TituloArbol";
			this->lbl_TituloArbol->Size = System::Drawing::Size(46, 20);
			this->lbl_TituloArbol->TabIndex = 245;
			this->lbl_TituloArbol->Text = L"Arbol";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(174, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 20);
			this->label1->TabIndex = 246;
			this->label1->Text = L"AVL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(175, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 20);
			this->label2->TabIndex = 247;
			this->label2->Text = L"ABO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(175, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 20);
			this->label3->TabIndex = 248;
			this->label3->Text = L"HEAP";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(256, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 249;
			this->label4->Text = L"Posiciones";
			// 
			// lbl_PosiAB
			// 
			this->lbl_PosiAB->AutoSize = true;
			this->lbl_PosiAB->Location = System::Drawing::Point(257, 52);
			this->lbl_PosiAB->Name = L"lbl_PosiAB";
			this->lbl_PosiAB->Size = System::Drawing::Size(51, 20);
			this->lbl_PosiAB->TabIndex = 250;
			this->lbl_PosiAB->Text = L"label5";
			// 
			// lbl_PosiHEAP
			// 
			this->lbl_PosiHEAP->AutoSize = true;
			this->lbl_PosiHEAP->Location = System::Drawing::Point(257, 123);
			this->lbl_PosiHEAP->Name = L"lbl_PosiHEAP";
			this->lbl_PosiHEAP->Size = System::Drawing::Size(51, 20);
			this->lbl_PosiHEAP->TabIndex = 252;
			this->lbl_PosiHEAP->Text = L"label6";
			// 
			// lbl_PosiAVL
			// 
			this->lbl_PosiAVL->AutoSize = true;
			this->lbl_PosiAVL->Location = System::Drawing::Point(257, 87);
			this->lbl_PosiAVL->Name = L"lbl_PosiAVL";
			this->lbl_PosiAVL->Size = System::Drawing::Size(51, 20);
			this->lbl_PosiAVL->TabIndex = 251;
			this->lbl_PosiAVL->Text = L"label7";
			// 
			// lbl_FrutaHEAP
			// 
			this->lbl_FrutaHEAP->AutoSize = true;
			this->lbl_FrutaHEAP->Location = System::Drawing::Point(369, 123);
			this->lbl_FrutaHEAP->Name = L"lbl_FrutaHEAP";
			this->lbl_FrutaHEAP->Size = System::Drawing::Size(51, 20);
			this->lbl_FrutaHEAP->TabIndex = 256;
			this->lbl_FrutaHEAP->Text = L"label6";
			// 
			// lbl_FrutaAVL
			// 
			this->lbl_FrutaAVL->AutoSize = true;
			this->lbl_FrutaAVL->Location = System::Drawing::Point(369, 87);
			this->lbl_FrutaAVL->Name = L"lbl_FrutaAVL";
			this->lbl_FrutaAVL->Size = System::Drawing::Size(51, 20);
			this->lbl_FrutaAVL->TabIndex = 255;
			this->lbl_FrutaAVL->Text = L"label7";
			// 
			// lbl_FrutaAB
			// 
			this->lbl_FrutaAB->AutoSize = true;
			this->lbl_FrutaAB->Location = System::Drawing::Point(369, 52);
			this->lbl_FrutaAB->Name = L"lbl_FrutaAB";
			this->lbl_FrutaAB->Size = System::Drawing::Size(51, 20);
			this->lbl_FrutaAB->TabIndex = 254;
			this->lbl_FrutaAB->Text = L"label5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(368, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 20);
			this->label8->TabIndex = 253;
			this->label8->Text = L"Cantidad de frutos";
			// 
			// lbl_MontoTotalHEAP
			// 
			this->lbl_MontoTotalHEAP->AutoSize = true;
			this->lbl_MontoTotalHEAP->Location = System::Drawing::Point(515, 123);
			this->lbl_MontoTotalHEAP->Name = L"lbl_MontoTotalHEAP";
			this->lbl_MontoTotalHEAP->Size = System::Drawing::Size(51, 20);
			this->lbl_MontoTotalHEAP->TabIndex = 260;
			this->lbl_MontoTotalHEAP->Text = L"label6";
			// 
			// lbl_MontoTotalAVL
			// 
			this->lbl_MontoTotalAVL->AutoSize = true;
			this->lbl_MontoTotalAVL->Location = System::Drawing::Point(515, 87);
			this->lbl_MontoTotalAVL->Name = L"lbl_MontoTotalAVL";
			this->lbl_MontoTotalAVL->Size = System::Drawing::Size(51, 20);
			this->lbl_MontoTotalAVL->TabIndex = 259;
			this->lbl_MontoTotalAVL->Text = L"label7";
			// 
			// lbl_MontoTotalAB
			// 
			this->lbl_MontoTotalAB->AutoSize = true;
			this->lbl_MontoTotalAB->Location = System::Drawing::Point(515, 52);
			this->lbl_MontoTotalAB->Name = L"lbl_MontoTotalAB";
			this->lbl_MontoTotalAB->Size = System::Drawing::Size(51, 20);
			this->lbl_MontoTotalAB->TabIndex = 258;
			this->lbl_MontoTotalAB->Text = L"label5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(514, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 20);
			this->label9->TabIndex = 257;
			this->label9->Text = L"Monto Total";
			// 
			// btn_VenderAB
			// 
			this->btn_VenderAB->Location = System::Drawing::Point(613, 42);
			this->btn_VenderAB->Name = L"btn_VenderAB";
			this->btn_VenderAB->Size = System::Drawing::Size(80, 30);
			this->btn_VenderAB->TabIndex = 261;
			this->btn_VenderAB->Text = L"Vender";
			this->btn_VenderAB->UseVisualStyleBackColor = true;
			// 
			// btn_VenderAVL
			// 
			this->btn_VenderAVL->Location = System::Drawing::Point(613, 77);
			this->btn_VenderAVL->Name = L"btn_VenderAVL";
			this->btn_VenderAVL->Size = System::Drawing::Size(80, 30);
			this->btn_VenderAVL->TabIndex = 262;
			this->btn_VenderAVL->Text = L"Vender";
			this->btn_VenderAVL->UseVisualStyleBackColor = true;
			// 
			// btn_VenderHEAP
			// 
			this->btn_VenderHEAP->Location = System::Drawing::Point(613, 113);
			this->btn_VenderHEAP->Name = L"btn_VenderHEAP";
			this->btn_VenderHEAP->Size = System::Drawing::Size(80, 30);
			this->btn_VenderHEAP->TabIndex = 263;
			this->btn_VenderHEAP->Text = L"Vender";
			this->btn_VenderHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_VenderTodo
			// 
			this->btn_VenderTodo->Location = System::Drawing::Point(340, 197);
			this->btn_VenderTodo->Name = L"btn_VenderTodo";
			this->btn_VenderTodo->Size = System::Drawing::Size(132, 30);
			this->btn_VenderTodo->TabIndex = 264;
			this->btn_VenderTodo->Text = L"Vender Todo";
			this->btn_VenderTodo->UseVisualStyleBackColor = true;
			// 
			// btn_Mercado
			// 
			this->btn_Mercado->Location = System::Drawing::Point(1308, 53);
			this->btn_Mercado->Name = L"btn_Mercado";
			this->btn_Mercado->Size = System::Drawing::Size(169, 88);
			this->btn_Mercado->TabIndex = 265;
			this->btn_Mercado->Text = L"Mercado";
			this->btn_Mercado->UseVisualStyleBackColor = true;
			this->btn_Mercado->Click += gcnew System::EventHandler(this, &Form1::btn_Mercado_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1272, 263);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 20);
			this->label5->TabIndex = 266;
			this->label5->Text = L"Inventario";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1186, 321);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 267;
			this->label6->Text = L"Arbol AB";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1177, 417);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 20);
			this->label7->TabIndex = 268;
			this->label7->Text = L"Arbol AVL";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1164, 505);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 20);
			this->label10->TabIndex = 269;
			this->label10->Text = L"Arbol HEAP";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1137, 702);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(121, 20);
			this->label11->TabIndex = 270;
			this->label11->Text = L"Espantapajaros";
			// 
			// pb_ArbolAB
			// 
			this->pb_ArbolAB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ArbolAB->Location = System::Drawing::Point(1276, 301);
			this->pb_ArbolAB->Name = L"pb_ArbolAB";
			this->pb_ArbolAB->Size = System::Drawing::Size(63, 64);
			this->pb_ArbolAB->TabIndex = 271;
			this->pb_ArbolAB->TabStop = false;
			// 
			// pb_ArbolAVL
			// 
			this->pb_ArbolAVL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ArbolAVL->Location = System::Drawing::Point(1276, 394);
			this->pb_ArbolAVL->Name = L"pb_ArbolAVL";
			this->pb_ArbolAVL->Size = System::Drawing::Size(63, 64);
			this->pb_ArbolAVL->TabIndex = 272;
			this->pb_ArbolAVL->TabStop = false;
			// 
			// pb_ArbolHEAP
			// 
			this->pb_ArbolHEAP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ArbolHEAP->Location = System::Drawing::Point(1276, 484);
			this->pb_ArbolHEAP->Name = L"pb_ArbolHEAP";
			this->pb_ArbolHEAP->Size = System::Drawing::Size(63, 64);
			this->pb_ArbolHEAP->TabIndex = 273;
			this->pb_ArbolHEAP->TabStop = false;
			// 
			// pb_Espanta
			// 
			this->pb_Espanta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_Espanta->Location = System::Drawing::Point(1276, 679);
			this->pb_Espanta->Name = L"pb_Espanta";
			this->pb_Espanta->Size = System::Drawing::Size(63, 64);
			this->pb_Espanta->TabIndex = 274;
			this->pb_Espanta->TabStop = false;
			// 
			// lbl_CantAB
			// 
			this->lbl_CantAB->AutoSize = true;
			this->lbl_CantAB->Location = System::Drawing::Point(1358, 321);
			this->lbl_CantAB->Name = L"lbl_CantAB";
			this->lbl_CantAB->Size = System::Drawing::Size(62, 20);
			this->lbl_CantAB->TabIndex = 275;
			this->lbl_CantAB->Text = L"cantAB";
			// 
			// lbl_CantAVL
			// 
			this->lbl_CantAVL->AutoSize = true;
			this->lbl_CantAVL->Location = System::Drawing::Point(1358, 417);
			this->lbl_CantAVL->Name = L"lbl_CantAVL";
			this->lbl_CantAVL->Size = System::Drawing::Size(71, 20);
			this->lbl_CantAVL->TabIndex = 276;
			this->lbl_CantAVL->Text = L"cantAVL";
			// 
			// lbl_CantHEAP
			// 
			this->lbl_CantHEAP->AutoSize = true;
			this->lbl_CantHEAP->Location = System::Drawing::Point(1358, 505);
			this->lbl_CantHEAP->Name = L"lbl_CantHEAP";
			this->lbl_CantHEAP->Size = System::Drawing::Size(84, 20);
			this->lbl_CantHEAP->TabIndex = 277;
			this->lbl_CantHEAP->Text = L"cantHEAP";
			// 
			// lbl_CantEspanta
			// 
			this->lbl_CantEspanta->AutoSize = true;
			this->lbl_CantEspanta->Location = System::Drawing::Point(1358, 702);
			this->lbl_CantEspanta->Name = L"lbl_CantEspanta";
			this->lbl_CantEspanta->Size = System::Drawing::Size(100, 20);
			this->lbl_CantEspanta->TabIndex = 278;
			this->lbl_CantEspanta->Text = L"cantEspanta";
			// 
			// btn_SembrarAB
			// 
			this->btn_SembrarAB->Location = System::Drawing::Point(1489, 314);
			this->btn_SembrarAB->Name = L"btn_SembrarAB";
			this->btn_SembrarAB->Size = System::Drawing::Size(83, 35);
			this->btn_SembrarAB->TabIndex = 279;
			this->btn_SembrarAB->Text = L"Sembrar";
			this->btn_SembrarAB->UseVisualStyleBackColor = true;
			// 
			// btn_SembrarAVL
			// 
			this->btn_SembrarAVL->Location = System::Drawing::Point(1489, 409);
			this->btn_SembrarAVL->Name = L"btn_SembrarAVL";
			this->btn_SembrarAVL->Size = System::Drawing::Size(83, 36);
			this->btn_SembrarAVL->TabIndex = 280;
			this->btn_SembrarAVL->Text = L"Sembrar";
			this->btn_SembrarAVL->UseVisualStyleBackColor = true;
			// 
			// btn_SembrarHEAP
			// 
			this->btn_SembrarHEAP->Location = System::Drawing::Point(1489, 497);
			this->btn_SembrarHEAP->Name = L"btn_SembrarHEAP";
			this->btn_SembrarHEAP->Size = System::Drawing::Size(83, 36);
			this->btn_SembrarHEAP->TabIndex = 282;
			this->btn_SembrarHEAP->Text = L"Sembrar";
			this->btn_SembrarHEAP->UseVisualStyleBackColor = true;
			// 
			// btn_SembrarEspanta
			// 
			this->btn_SembrarEspanta->Location = System::Drawing::Point(1489, 695);
			this->btn_SembrarEspanta->Name = L"btn_SembrarEspanta";
			this->btn_SembrarEspanta->Size = System::Drawing::Size(83, 35);
			this->btn_SembrarEspanta->TabIndex = 281;
			this->btn_SembrarEspanta->Text = L"Colocar";
			this->btn_SembrarEspanta->UseVisualStyleBackColor = true;
			// 
			// btn_Pause
			// 
			this->btn_Pause->Location = System::Drawing::Point(1182, 1031);
			this->btn_Pause->Name = L"btn_Pause";
			this->btn_Pause->Size = System::Drawing::Size(98, 41);
			this->btn_Pause->TabIndex = 283;
			this->btn_Pause->Text = L"Pausa";
			this->btn_Pause->UseVisualStyleBackColor = true;
			// 
			// btn_Resume
			// 
			this->btn_Resume->Location = System::Drawing::Point(1323, 1031);
			this->btn_Resume->Name = L"btn_Resume";
			this->btn_Resume->Size = System::Drawing::Size(97, 41);
			this->btn_Resume->TabIndex = 284;
			this->btn_Resume->Text = L"Continuar";
			this->btn_Resume->UseVisualStyleBackColor = true;
			// 
			// btn_Save
			// 
			this->btn_Save->Location = System::Drawing::Point(1480, 1020);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(127, 63);
			this->btn_Save->TabIndex = 285;
			this->btn_Save->Text = L"Guardar Partida";
			this->btn_Save->UseVisualStyleBackColor = true;
			// 
			// btn_VenderSPLAY
			// 
			this->btn_VenderSPLAY->Location = System::Drawing::Point(612, 150);
			this->btn_VenderSPLAY->Name = L"btn_VenderSPLAY";
			this->btn_VenderSPLAY->Size = System::Drawing::Size(80, 30);
			this->btn_VenderSPLAY->TabIndex = 290;
			this->btn_VenderSPLAY->Text = L"Vender";
			this->btn_VenderSPLAY->UseVisualStyleBackColor = true;
			// 
			// lbl_MontoTotalSPLAY
			// 
			this->lbl_MontoTotalSPLAY->AutoSize = true;
			this->lbl_MontoTotalSPLAY->Location = System::Drawing::Point(514, 160);
			this->lbl_MontoTotalSPLAY->Name = L"lbl_MontoTotalSPLAY";
			this->lbl_MontoTotalSPLAY->Size = System::Drawing::Size(51, 20);
			this->lbl_MontoTotalSPLAY->TabIndex = 289;
			this->lbl_MontoTotalSPLAY->Text = L"label6";
			// 
			// lbl_FrutaSPLAY
			// 
			this->lbl_FrutaSPLAY->AutoSize = true;
			this->lbl_FrutaSPLAY->Location = System::Drawing::Point(368, 160);
			this->lbl_FrutaSPLAY->Name = L"lbl_FrutaSPLAY";
			this->lbl_FrutaSPLAY->Size = System::Drawing::Size(51, 20);
			this->lbl_FrutaSPLAY->TabIndex = 288;
			this->lbl_FrutaSPLAY->Text = L"label6";
			// 
			// lbl_PosiSPLAY
			// 
			this->lbl_PosiSPLAY->AutoSize = true;
			this->lbl_PosiSPLAY->Location = System::Drawing::Point(256, 160);
			this->lbl_PosiSPLAY->Name = L"lbl_PosiSPLAY";
			this->lbl_PosiSPLAY->Size = System::Drawing::Size(51, 20);
			this->lbl_PosiSPLAY->TabIndex = 287;
			this->lbl_PosiSPLAY->Text = L"label6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(174, 160);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 20);
			this->label15->TabIndex = 286;
			this->label15->Text = L"SPLAY";
			// 
			// btn_SembrarSPLAY
			// 
			this->btn_SembrarSPLAY->Location = System::Drawing::Point(1489, 591);
			this->btn_SembrarSPLAY->Name = L"btn_SembrarSPLAY";
			this->btn_SembrarSPLAY->Size = System::Drawing::Size(83, 36);
			this->btn_SembrarSPLAY->TabIndex = 294;
			this->btn_SembrarSPLAY->Text = L"Sembrar";
			this->btn_SembrarSPLAY->UseVisualStyleBackColor = true;
			// 
			// lbl_CantSPLAY
			// 
			this->lbl_CantSPLAY->AutoSize = true;
			this->lbl_CantSPLAY->Location = System::Drawing::Point(1358, 599);
			this->lbl_CantSPLAY->Name = L"lbl_CantSPLAY";
			this->lbl_CantSPLAY->Size = System::Drawing::Size(92, 20);
			this->lbl_CantSPLAY->TabIndex = 293;
			this->lbl_CantSPLAY->Text = L"cantSPLAY";
			// 
			// pb_ArbolSPLAY
			// 
			this->pb_ArbolSPLAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_ArbolSPLAY->Location = System::Drawing::Point(1276, 578);
			this->pb_ArbolSPLAY->Name = L"pb_ArbolSPLAY";
			this->pb_ArbolSPLAY->Size = System::Drawing::Size(63, 64);
			this->pb_ArbolSPLAY->TabIndex = 292;
			this->pb_ArbolSPLAY->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1164, 599);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 20);
			this->label13->TabIndex = 291;
			this->label13->Text = L"Arbol SPLAY";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1678, 1170);
			this->Controls->Add(this->btn_SembrarSPLAY);
			this->Controls->Add(this->lbl_CantSPLAY);
			this->Controls->Add(this->pb_ArbolSPLAY);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->btn_VenderSPLAY);
			this->Controls->Add(this->lbl_MontoTotalSPLAY);
			this->Controls->Add(this->lbl_FrutaSPLAY);
			this->Controls->Add(this->lbl_PosiSPLAY);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->btn_Resume);
			this->Controls->Add(this->btn_Pause);
			this->Controls->Add(this->btn_SembrarHEAP);
			this->Controls->Add(this->btn_SembrarEspanta);
			this->Controls->Add(this->btn_SembrarAVL);
			this->Controls->Add(this->btn_SembrarAB);
			this->Controls->Add(this->lbl_CantEspanta);
			this->Controls->Add(this->lbl_CantHEAP);
			this->Controls->Add(this->lbl_CantAVL);
			this->Controls->Add(this->lbl_CantAB);
			this->Controls->Add(this->pb_Espanta);
			this->Controls->Add(this->pb_ArbolHEAP);
			this->Controls->Add(this->pb_ArbolAVL);
			this->Controls->Add(this->pb_ArbolAB);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_Mercado);
			this->Controls->Add(this->btn_VenderTodo);
			this->Controls->Add(this->btn_VenderHEAP);
			this->Controls->Add(this->btn_VenderAVL);
			this->Controls->Add(this->btn_VenderAB);
			this->Controls->Add(this->lbl_MontoTotalHEAP);
			this->Controls->Add(this->lbl_MontoTotalAVL);
			this->Controls->Add(this->lbl_MontoTotalAB);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lbl_FrutaHEAP);
			this->Controls->Add(this->lbl_FrutaAVL);
			this->Controls->Add(this->lbl_FrutaAB);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lbl_PosiHEAP);
			this->Controls->Add(this->lbl_PosiAVL);
			this->Controls->Add(this->lbl_PosiAB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_TituloArbol);
			this->Controls->Add(this->pb_plaga71);
			this->Controls->Add(this->pb_espanta71);
			this->Controls->Add(this->pb_plaga72);
			this->Controls->Add(this->pb_espanta72);
			this->Controls->Add(this->pb_plaga73);
			this->Controls->Add(this->pb_espanta73);
			this->Controls->Add(this->pb_plaga74);
			this->Controls->Add(this->pb_espanta74);
			this->Controls->Add(this->pb_plaga75);
			this->Controls->Add(this->pb_espanta75);
			this->Controls->Add(this->pb_plaga76);
			this->Controls->Add(this->pb_espanta76);
			this->Controls->Add(this->pb_plaga77);
			this->Controls->Add(this->pb_espanta77);
			this->Controls->Add(this->pb_espanta61);
			this->Controls->Add(this->pb_plaga62);
			this->Controls->Add(this->pb_espanta62);
			this->Controls->Add(this->pb_plaga63);
			this->Controls->Add(this->pb_espanta63);
			this->Controls->Add(this->pb_plaga64);
			this->Controls->Add(this->pb_espanta64);
			this->Controls->Add(this->pb_plaga65);
			this->Controls->Add(this->pb_espanta65);
			this->Controls->Add(this->pb_plaga66);
			this->Controls->Add(this->pb_espanta66);
			this->Controls->Add(this->pb_plaga67);
			this->Controls->Add(this->pb_espanta67);
			this->Controls->Add(this->pb_plaga57);
			this->Controls->Add(this->pb_espanta57);
			this->Controls->Add(this->pb_plaga61);
			this->Controls->Add(this->pb_plaga51);
			this->Controls->Add(this->pb_espanta51);
			this->Controls->Add(this->pb_plaga52);
			this->Controls->Add(this->pb_espanta52);
			this->Controls->Add(this->pb_plaga53);
			this->Controls->Add(this->pb_espanta53);
			this->Controls->Add(this->pb_plaga54);
			this->Controls->Add(this->pb_espanta54);
			this->Controls->Add(this->pb_plaga55);
			this->Controls->Add(this->pb_espanta55);
			this->Controls->Add(this->pb_plaga56);
			this->Controls->Add(this->pb_espanta56);
			this->Controls->Add(this->pb_plaga31);
			this->Controls->Add(this->pb_espanta31);
			this->Controls->Add(this->pb_plaga32);
			this->Controls->Add(this->pb_espanta32);
			this->Controls->Add(this->pb_plaga33);
			this->Controls->Add(this->pb_espanta33);
			this->Controls->Add(this->pb_plaga34);
			this->Controls->Add(this->pb_espanta34);
			this->Controls->Add(this->pb_plaga35);
			this->Controls->Add(this->pb_espanta35);
			this->Controls->Add(this->pb_plaga36);
			this->Controls->Add(this->pb_espanta36);
			this->Controls->Add(this->pb_plaga37);
			this->Controls->Add(this->pb_espanta37);
			this->Controls->Add(this->pb_plaga41);
			this->Controls->Add(this->pb_espanta41);
			this->Controls->Add(this->pb_plaga42);
			this->Controls->Add(this->pb_espanta42);
			this->Controls->Add(this->pb_plaga43);
			this->Controls->Add(this->pb_espanta43);
			this->Controls->Add(this->pb_plaga44);
			this->Controls->Add(this->pb_espanta44);
			this->Controls->Add(this->pb_plaga47);
			this->Controls->Add(this->pb_espanta47);
			this->Controls->Add(this->pb_plaga46);
			this->Controls->Add(this->pb_espanta46);
			this->Controls->Add(this->pb_plaga45);
			this->Controls->Add(this->pb_espanta45);
			this->Controls->Add(this->pb_plaga21);
			this->Controls->Add(this->pb_espanta21);
			this->Controls->Add(this->pb_plaga22);
			this->Controls->Add(this->pb_espanta22);
			this->Controls->Add(this->pb_plaga23);
			this->Controls->Add(this->pb_espanta23);
			this->Controls->Add(this->pb_plaga24);
			this->Controls->Add(this->pb_espanta24);
			this->Controls->Add(this->pb_plaga25);
			this->Controls->Add(this->pb_espanta25);
			this->Controls->Add(this->pb_plaga26);
			this->Controls->Add(this->pb_espanta26);
			this->Controls->Add(this->pb_plaga27);
			this->Controls->Add(this->pb_espanta27);
			this->Controls->Add(this->pb_espanta11);
			this->Controls->Add(this->pb_plaga12);
			this->Controls->Add(this->pb_espanta12);
			this->Controls->Add(this->pb_plaga13);
			this->Controls->Add(this->pb_espanta13);
			this->Controls->Add(this->pb_plaga14);
			this->Controls->Add(this->pb_espanta14);
			this->Controls->Add(this->pb_plaga15);
			this->Controls->Add(this->pb_espanta15);
			this->Controls->Add(this->pb_plaga16);
			this->Controls->Add(this->pb_espanta16);
			this->Controls->Add(this->pb_plaga17);
			this->Controls->Add(this->pb_espanta17);
			this->Controls->Add(this->pb_plaga11);
			this->Controls->Add(this->pb_granjero73);
			this->Controls->Add(this->pb_granjero74);
			this->Controls->Add(this->pb_granjero75);
			this->Controls->Add(this->pb_granjero76);
			this->Controls->Add(this->pb_granjero77);
			this->Controls->Add(this->pb_granjero72);
			this->Controls->Add(this->pb_granjero71);
			this->Controls->Add(this->pb_granjero67);
			this->Controls->Add(this->pb_granjero66);
			this->Controls->Add(this->pb_granjero65);
			this->Controls->Add(this->pb_granjero64);
			this->Controls->Add(this->pb_granjero63);
			this->Controls->Add(this->pb_granjero62);
			this->Controls->Add(this->pb_granjero61);
			this->Controls->Add(this->pb_granjero57);
			this->Controls->Add(this->pb_granjero56);
			this->Controls->Add(this->pb_granjero55);
			this->Controls->Add(this->pb_granjero54);
			this->Controls->Add(this->pb_granjero53);
			this->Controls->Add(this->pb_granjero52);
			this->Controls->Add(this->pb_granjero51);
			this->Controls->Add(this->pb_granjero47);
			this->Controls->Add(this->pb_granjero46);
			this->Controls->Add(this->pb_granjero45);
			this->Controls->Add(this->pb_granjero44);
			this->Controls->Add(this->pb_granjero43);
			this->Controls->Add(this->pb_granjero42);
			this->Controls->Add(this->pb_granjero41);
			this->Controls->Add(this->pb_granjero37);
			this->Controls->Add(this->pb_granjero36);
			this->Controls->Add(this->pb_granjero35);
			this->Controls->Add(this->pb_granjero34);
			this->Controls->Add(this->pb_granjero33);
			this->Controls->Add(this->pb_granjero32);
			this->Controls->Add(this->pb_granjero31);
			this->Controls->Add(this->pb_granjero27);
			this->Controls->Add(this->pb_granjero26);
			this->Controls->Add(this->pb_granjero25);
			this->Controls->Add(this->pb_granjero24);
			this->Controls->Add(this->pb_granjero23);
			this->Controls->Add(this->pb_granjero22);
			this->Controls->Add(this->pb_granjero21);
			this->Controls->Add(this->pb_granjero17);
			this->Controls->Add(this->pb_granjero16);
			this->Controls->Add(this->pb_granjero15);
			this->Controls->Add(this->pb_granjero14);
			this->Controls->Add(this->pb_granjero13);
			this->Controls->Add(this->pb_granjero12);
			this->Controls->Add(this->pb_granjero11);
			this->Controls->Add(this->pb_arbol77);
			this->Controls->Add(this->pb_arbol76);
			this->Controls->Add(this->pb_arbol75);
			this->Controls->Add(this->pb_arbol74);
			this->Controls->Add(this->pb_arbol73);
			this->Controls->Add(this->pb_arbol72);
			this->Controls->Add(this->pb_arbol71);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pb_arbol67);
			this->Controls->Add(this->pb_arbol66);
			this->Controls->Add(this->pb_arbol65);
			this->Controls->Add(this->pb_arbol64);
			this->Controls->Add(this->pb_arbol63);
			this->Controls->Add(this->pb_arbol62);
			this->Controls->Add(this->pb_arbol61);
			this->Controls->Add(this->pb_arbol57);
			this->Controls->Add(this->pb_arbol56);
			this->Controls->Add(this->pb_arbol55);
			this->Controls->Add(this->pb_arbol54);
			this->Controls->Add(this->pb_arbol53);
			this->Controls->Add(this->pb_arbol52);
			this->Controls->Add(this->pb_arbol51);
			this->Controls->Add(this->pb_arbol47);
			this->Controls->Add(this->pb_arbol46);
			this->Controls->Add(this->pb_arbol45);
			this->Controls->Add(this->pb_arbol44);
			this->Controls->Add(this->pb_arbol43);
			this->Controls->Add(this->pb_arbol42);
			this->Controls->Add(this->pb_arbol41);
			this->Controls->Add(this->pb_arbol37);
			this->Controls->Add(this->pb_arbol36);
			this->Controls->Add(this->pb_arbol35);
			this->Controls->Add(this->pb_arbol34);
			this->Controls->Add(this->pb_arbol33);
			this->Controls->Add(this->pb_arbol32);
			this->Controls->Add(this->pb_arbol31);
			this->Controls->Add(this->pb_arbol27);
			this->Controls->Add(this->pb_arbol26);
			this->Controls->Add(this->pb_arbol25);
			this->Controls->Add(this->pb_arbol24);
			this->Controls->Add(this->pb_arbol23);
			this->Controls->Add(this->pb_arbol22);
			this->Controls->Add(this->pb_arbol21);
			this->Controls->Add(this->pb_arbol17);
			this->Controls->Add(this->pb_arbol16);
			this->Controls->Add(this->pb_arbol15);
			this->Controls->Add(this->pb_arbol14);
			this->Controls->Add(this->pb_arbol13);
			this->Controls->Add(this->pb_arbol12);
			this->Controls->Add(this->pb_arbol11);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pb_13);
			this->Controls->Add(this->pb_12);
			this->Controls->Add(this->pb_11);
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_arbol71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_granjero73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_espanta71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_plaga71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolAB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolAVL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolHEAP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Espanta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_ArbolSPLAY))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pb_13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pb_12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pb_11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void pictureBox44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox71_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox60_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox62_Click(System::Object^ sender, System::EventArgs^ e) {
}




















































private: System::Void btn_Mercado_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaMercado^ vent = gcnew VentanaMercado;
	vent->ShowDialog();
}
};
}
