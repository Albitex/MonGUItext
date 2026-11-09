// MathFuncsDll.h
#include<string>

namespace inpoutFun
{
	using namespace std;
	
    class inpfGUI
    {
    public:

			
		// Load string "in" in DLL	
		static __declspec(dllexport) void inpD(string in,char tip);

		// Load int "ini" in DLL
		static __declspec(dllexport) void inpDi(int ini,char tipi);

		// Load 2 int in DLL
		static __declspec(dllexport) void inpD2i(int in,int inx);

		// Load char "inc" in DLL
		static __declspec(dllexport) void inpDC(char tipC, char value);

		// Load a char "piece" id DLL
		static __declspec(dllexport) void inpDc(char tipc);

		// Upload string "out" in GUI
		static __declspec(dllexport) string outD(char tipo);

		// Upload int "outi" in GUI
		static __declspec(dllexport) int outDi(char tipoi);

		// Upload int board form1 in GUI
		static __declspec(dllexport) int outDF(int inf);

		// UPload a char in GUI
		static __declspec(dllexport) char outDC(char tipoC);
	};

	class inotext
	{
		public:
			// Write a data string fen/parameters in inpout.txt file
			static __declspec(dllexport)int writetext(char m);

			// Write a data string "Moves" in inpout.txt file
			static __declspec(dllexport)int writeMtext();

			// Read data string from inpout.txt file
			static __declspec(dllexport)int linpout();

			// Delete inpout.txt file
			static __declspec(dllexport) void resettxt(char t);

			// Reset e init parameters variable;
			static __declspec(dllexport) void resetvar();

			// Read moves from move.txt file
			static __declspec(dllexport) int readnmsG();



	};

	
}