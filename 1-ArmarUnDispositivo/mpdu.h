#ifndef mpdu_h
#define mpdu_h
#include <cstring>

using namespace std;

class mpdu{
	char hdr[6];
	char sdu[60];
public:
	mpdu(){strcpy (hdr,""), strcpy(sdu,"");}
	mpdu(string h, string s){strcpy (hdr,h.c_str()), strcpy(sdu,s.c_str());}
	string getHdr(){return hdr;}
	void setHdr(string s){strcpy(hdr,s.c_str());}
	void setSdu(string c){ strcpy(sdu,c.c_str());}
	string getSdu(){return sdu;}
		//friend ostream& operator<<(ostream& os, mpdu m){return os << "["<<m.getHdr()<<", "<<m.getSdu()<<"]";}
};
#endif