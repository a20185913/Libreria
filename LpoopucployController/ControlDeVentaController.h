#pragma once
namespace LpoopucployController {
	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Collections::Generic;

	public ref class ControlDeVentaController {

		public:
			ControlDeVentaController();
			int GastoArticulo(String^ mes);
	};
}