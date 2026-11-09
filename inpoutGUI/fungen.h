#include<string>



namespace inpoutFun
{
	using namespace std;

	string elimspz(string enps);
	string encoderB();
	string fengen();
    string msdys(int stout);
		
	void initpgame();
	void lboardb();
	void lboardw();
	void pezincc(int nvet,int indxcasa);
	void resetfpg();
	void resetpa();
	void startboard();
	void writestop();
	char legcar (string fen, int nposz);
	int castlever(char casa);
	int controlfen (string fens, int lun);
	int dec (string fenx);
	int enpmc(string senp);
	int enpokp();
	int fencor();
	int indesb(int caimg);
	int indexpb(char pmb);
	int indexpw(char pmw);
	int lenp(char casa);
	int lmoveG ();
	int lnd(char nd);
	int readstope();
	int Sinterod(string nintero);

	extern int autost,loadm,movko,nmE,nmp;
	extern int startpos,Kingnw,Kingnb,saveG;
	extern int inout[];
	extern char colorp,W,w,B,b;
	extern char kboard[];
	extern string enpp,enpup,gamest;
	extern string nmGt;
	extern string nmosp,mos50;
	extern string nmsG[],nmsout[];
	extern string Fen,movein;
	
}