#include "stdafx.h"
#include <string>

//
// function to transform a system string^ in std string
//

namespace Albi1{
	using namespace std;

	void MarshalString ( String ^ s, string& os ) {
		using namespace Runtime::InteropServices;
        const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
    }

	


}