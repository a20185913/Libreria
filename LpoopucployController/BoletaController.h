#pragma once

namespace LpoopucployController {
	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class BoletaController {
	private:
		SqlConnection^ objconexion;
		private:
			List<Boleta^>^ ListaBoleta;
		public :
			BoletaController();
			void AbrirConexion();
			void Cerrarconexion();
			void RegistrarBoleta(Boleta^ objBoleta,List<Boceto^>^ lista);
			void eliminar(int codigo);
			List<Boleta^>^ Buscarxdos(String^ fecha,int codigoPersonal);
			List<Boleta^>^ buscarxpersonal(int codigop);
			List<Boleta^>^ Buscarall();
			List<Boleta^>^ Buscarxcodigo(int codigo);
			List<Boleta^>^ Buscarxfecha(String^ fecha);
			int Ingreso(String^ mes);
	};
}