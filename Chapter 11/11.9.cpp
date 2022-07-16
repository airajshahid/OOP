#include<iostream>
#include<string>
using namespace std;
class Package{
public:
	string Sname, Saddress, Scity, Sstate, Rname, Raddress, Rcity, Rstate;
	double SZIP, RZIP, ounceWeight, ounceCost;
public:	
	Package(string sn, string sa, string sc, string ss, string rn, string ra, string rc, string rs, double sz, double rz, double ow, double oc)
	{
	Sname= sn;
	Saddress= sa;
	Scity= sc;
	Sstate= ss;
	Rname= rn;
	Raddress= ra;
	Rcity= rc;
	Rstate= rs;
	SZIP= sz 
	RZIP= rz;
	   if (ow>=0)
	    {
	      ounceWeight= ow;
	    }
       if (oc>=0)
	    {
	      ounceCost= oc;		
	    }
	double calculateCost(double ow, double oc)
	{
		double cost= ow*oc;
	}
};
class twoDayPackage :public Package
{
public:
	string Sename, Seaddress, Secity, Sestate, Rename, Readdress, Recity, Restate;
	double sZIP, rZIP, oWeight, oCost;
public:	
	twoDayPackage(string sen, string sea, string sec, string ses, string ren, string rea, string rec, string res, double sez, double rez, double wpo, double cpo)
	{
	Sename= sen;
	Seaddress= sea;
	Secity= sec;
	Sestate= ses;
	Rename= ren;
	Readdress= rea;
	Recity= rec;
	Restate= res;
	sZIP= sez; 
	rZIP= rez;
	   if (ow>=0)
	    {
	      ounceWeight= ow;
	    }
       if (oc>=0)
	    {
	      ounceCost= oc;		
	    }
	double calculateCost(double ow, double oc)
	{
		double cost= ow*oc;
	}	
};
class overnightPackage : public Package
{
public:
    double calculateCost(double ow, double oc)
	{
		double addCost;
		addCost= oc + (oc*0.05); 
		double cost= (ow*oc)+ addCost;
	}	
};

