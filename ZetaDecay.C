#include <iostream>
#include <math.h>
#include <TRandom3.h>
#include <TLorentzVector.h>
#include <TVector3.h>
#include <TH1D.h>
#include <TCanvas.h>
#include <TStyle.h>

void ZetaDecay() {
	//The Mass of Z in GeV
	Double_t M_z = 90.;
	
	//c1 is the class of histograms referring to the Z boson

	TCanvas *c1 = new TCanvas("c1","Z histograms in the lab frame",1240,1024);



	c1->Divide(1,3);
	TH1F *h_11 = new TH1F("h_11","Rapidity Distribution",200,-4,4);
	TH1F *h_12 = new TH1F("h_12","Phi Distribution",200,-(TMath::Pi())-0.5,(TMath::Pi())+0.5);
	TH1F *h_13 = new TH1F("h_13","Transverse momentum Distribution",500,0,90);


	c1->cd(1);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	
	c1->cd(2);
	gPad->SetTickx(2);
	gPad->SetTicky(2);

	
	c1->cd(3);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	

	//c2 contains the class of histograms that refer to the e^+e^- in the CM frame

	TCanvas *c2 = new TCanvas("c2","e^{+}e^{-} histograms in Z rest frame",1240,1024);

	//gStyle->SetOptStat(0);

	c2->Divide(2,5);
	TH1F *h_21 = new TH1F("h_21","rapidity Distribution for e^{+}",100,-4,4);
	TH1F *h_22 = new TH1F("h_22","Phi Distribution for e^{+}",100,-(TMath::Pi())-0.5,(TMath::Pi())+0.5);
	TH1F *h_23 = new TH1F("h_23","Transverse momentum Distribution for e^{+}",1000,0,50);
	TH1F *h_24 = new TH1F("h_24","cos(theta) for e^{+}",100,-1.5,1.5);
	TH1F *h_25 = new TH1F("h_25","Magnitute of momentum for e^{+}",300,0,50);
			
	TH1F *H_21 = new TH1F("H_21","rapidity Distribution for e^{-}",100,-4,4);
	TH1F *H_22 = new TH1F("H_22","Phi Distribution for e^{-}",100,-(TMath::Pi())-0.5,(TMath::Pi())+0.5);
	TH1F *H_23 = new TH1F("H_23","Transverse momentum Distribution for e^{-}",1000,0,50);
	TH1F *H_24 = new TH1F("H_24","cos(theta) for e^{-}",100,-1.5,1.5);
	TH1F *H_25 = new TH1F("H_25","Magnitute of momentum for e^{-}",300,0,50);
	
	c2->cd(1);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_21->GetYaxis()->SetLabelSize(0.06);
	h_21->GetXaxis()->SetLabelSize(0.08);	

	c2->cd(3);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_22->GetYaxis()->SetLabelSize(0.06);
	h_22->GetXaxis()->SetLabelSize(0.08);
	
	c2->cd(5);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_23->GetYaxis()->SetLabelSize(0.06);
	h_23->GetXaxis()->SetLabelSize(0.08);
	h_23->GetXaxis()->SetTitle("GeV");
	h_23->GetXaxis()->SetTitleSize(1);
	
	c2->cd(7);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_24->GetYaxis()->SetLabelSize(0.06);
	h_24->GetXaxis()->SetLabelSize(0.08);
	
	c2->cd(9);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_25->GetYaxis()->SetLabelSize(0.06);
	h_25->GetXaxis()->SetLabelSize(0.08);
	h_25->GetXaxis()->SetTitle("GeV");
	h_25->GetXaxis()->SetTitleSize(1);

	c2->cd(2);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_21->GetYaxis()->SetLabelSize(0.06);
	H_21->GetXaxis()->SetLabelSize(0.08);
	
	c2->cd(4);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_22->GetYaxis()->SetLabelSize(0.06);
	H_22->GetXaxis()->SetLabelSize(0.08);
	
	c2->cd(6);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_23->GetYaxis()->SetLabelSize(0.06);
	H_23->GetXaxis()->SetLabelSize(0.08);
	H_23->GetXaxis()->SetTitle("GeV");
	H_23->GetXaxis()->SetTitleSize(1);

	c2->cd(8);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_24->GetYaxis()->SetLabelSize(0.06);
	H_24->GetXaxis()->SetLabelSize(0.08);

	c2->cd(10);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_25->GetYaxis()->SetLabelSize(0.06);
	H_25->GetXaxis()->SetLabelSize(0.08);
	H_25->GetXaxis()->SetTitle("GeV");
	H_25->GetXaxis()->SetTitleSize(1);

	//c3 contains the class of histograms that refer to the e^+e^- in the lab frame

	TCanvas *c3 = new TCanvas("c3","e^{#+}e^{#-} histograms in Lab frame",1240,1024);

	//gStyle->SetOptStat(0);

	c3->Divide(2,5);
	TH1F *h_31 = new TH1F("h_31","rapidity Distribution for e^{+}",100,-6,6);
	TH1F *h_32 = new TH1F("h_32","Phi Distribution for e^{+}",100,-(TMath::Pi())-0.5,(TMath::Pi())+0.5);
	TH1F *h_33 = new TH1F("h_33","Transverse momentum Distribution for e^{+}",1000,0,50);
	TH1F *h_34 = new TH1F("h_34","cos(theta) for e^{+}",100,-1.5,1.5);
	TH1F *h_35 = new TH1F("h_35","Magnitute of momentum for e^{+}",100,0,50);
	
	TH1F *H_31 = new TH1F("H_31","rapidity Distribution for e^{-}",100,-6,6);
	TH1F *H_32 = new TH1F("H_32","Phi Distribution for e^{-}",100,-(TMath::Pi())-0.5,(TMath::Pi())+0.5);
	TH1F *H_33 = new TH1F("H_33","Transverse momentum Distribution for e^{-}",1000,0,50);
	TH1F *H_34 = new TH1F("H_34","cos(theta) for e^{-}",100,-1.5,1.5);
	TH1F *H_35 = new TH1F("H_35","Magnitute of momentum for e^{-}",100,0,50);
	
	c3->cd(1);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_31->GetYaxis()->SetLabelSize(0.06);
	h_31->GetXaxis()->SetLabelSize(0.08);
	
	c3->cd(3);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_32->GetYaxis()->SetLabelSize(0.06);
	h_32->GetXaxis()->SetLabelSize(0.08);
	
	c3->cd(5);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_33->GetYaxis()->SetLabelSize(0.06);
	h_33->GetXaxis()->SetLabelSize(0.08);
	h_33->GetXaxis()->SetTitle("GeV");
	h_33->GetXaxis()->SetTitleSize(1);
	
	c3->cd(7);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_33->GetYaxis()->SetLabelSize(0.06);
	h_34->GetXaxis()->SetLabelSize(0.08);

	c3->cd(9);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	h_35->GetYaxis()->SetLabelSize(0.06);
	h_35->GetXaxis()->SetLabelSize(0.08);
	h_35->GetXaxis()->SetTitle("GeV");
	h_35->GetXaxis()->SetTitleSize(1);

	c3->cd(2);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_31->GetYaxis()->SetLabelSize(0.06);
	H_31->GetXaxis()->SetLabelSize(0.08);

	
	c3->cd(4);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_32->GetYaxis()->SetLabelSize(0.06);
	H_32->GetXaxis()->SetLabelSize(0.08);

	
	c3->cd(6);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_33->GetYaxis()->SetLabelSize(0.06);
	H_33->GetXaxis()->SetLabelSize(0.08);
	H_33->GetXaxis()->SetTitle("GeV");
	H_33->GetXaxis()->SetTitleSize(1);

	c3->cd(8);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_34->GetYaxis()->SetLabelSize(0.06);
	H_34->GetXaxis()->SetLabelSize(0.08);

	c3->cd(10);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	H_35->GetYaxis()->SetLabelSize(0.06);	
	H_35->GetXaxis()->SetLabelSize(0.08);	
	H_35->GetXaxis()->SetTitle("GeV");
	H_35->GetXaxis()->SetTitleSize(1);
	
	TCanvas *c4 = new TCanvas("c4","Histograms for summed pt in both Lab and Z rest frame",900,700);
	TH1F *j_1 = new TH1F("h_26","Sum of Tranverse Momentum in Z rest frame",1000,0,45);
	TH1F *j_2 = new TH1F("h_26","Sum of Tranverse Momentum in Lab frame",1000,0,45);
		
	c4->Divide(1,2);
	
	c4->cd(1);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	j_1->GetXaxis()->SetTitle("GeV");

	c4->cd(2);
	gPad->SetTickx(2);
	gPad->SetTicky(2);
	j_2->GetXaxis()->SetTitle("GeV");

	TRandom3 *rnd1 = new TRandom3();
	TRandom3 *rnd2 = new TRandom3();	
	TRandom3 *rnd3 = new TRandom3();	
	TRandom3 *rnd4 = new TRandom3();	
	TRandom3 *rnd5 = new TRandom3();	



	Double_t E_z = 0;
	
	//The 4vector of Z in the lab frame
	//TLorentzVecror g1;
	
	
	
	Int_t events = 10000;	

	for(Int_t i=0;i<events;i++)
	{
		
		//Creation of initial distributions about Z in the Lab frame

		//Generation of rapidity
		Double_t y = rnd1->Uniform(-3,3);
		//Generation of phi angle
		Double_t Phi = rnd2->Uniform(-(TMath::Pi()),(TMath::Pi()));
		//Generation of transverse momentum from distribution exp(-Pt/Pt0) 
		//where Pt0=10GeV. 
		Double_t p_T = rnd3->Exp(10);	
		//We will use the expretion 
		//p=(E_T*cosh(y),p_T*sin(Phi),p_T*sin(Phi),E_T*sinh(y)) for the 
		//4-momentum (Tao Han),
		//where E_T=sqrt(p_T^2+M_z^2)
		Double_t E_T = sqrt(p_T*p_T+M_z*M_z);
		TLorentzVector g1(p_T*sin(Phi),p_T*sin(Phi),E_T*sinh(y),E_T*cosh(y));
		c1->cd(1);
		h_11->Fill(y);
		c1->cd(2);
		h_12->Fill(Phi);
		c1->cd(3);
		h_13->Fill(p_T);

		//Creation of e^+e^- distributions in the rest frame of Z

		//Because the electrons are ultrarelativistic, each one of them 
		//gets in the rest frame of Z energy M_z/2 with momentum of 
		//the same abs value
		
		Double_t theta_positron = rnd4->Uniform(0,TMath::Pi());

		Double_t Eta_positron = -log(tan(theta_positron/2));
		
		Double_t Phi_positron = rnd5->Uniform(-(TMath::Pi()),(TMath::Pi()));
		
		Double_t p_Tpositron = (M_z/2)*sin(theta_positron);

		//Four-momentum of positron

		TLorentzVector e1;		
		
		e1.SetPtEtaPhiE(p_Tpositron,Eta_positron,Phi_positron,M_z/2);

		Double_t theta_electron = TMath::Pi()-theta_positron;		
		
		Double_t Eta_electron = -log(tan((theta_electron)/2));

		Double_t Phi_electron=0;

		if (Phi_positron>=0)
		{		
			Phi_electron = Phi_positron-(TMath::Pi());
		}
		else 
		{
 			Phi_electron = Phi_positron+TMath::Pi();
		}

		Double_t p_Telectron = (M_z/2)*sin(theta_electron);
		
		//Four-momentum of electron

		TLorentzVector e2;
		
		e2.SetPtEtaPhiE(p_Telectron,Eta_electron,Phi_electron,M_z/2);

		c2->cd(1);
		h_21->Fill(e1.Rapidity());
		c2->cd(3);
		h_22->Fill(e1.Phi());
		c2->cd(5);
		h_23->Fill(e1.Pt());
		c2->cd(7);
		h_24->Fill(e1.CosTheta());//the values near 1 and -1 should be more frequent because cos(x) changes slower than near 0
		c2->cd(9);
		h_25->Fill(e1.P());
		c2->cd(2);
		H_21->Fill(e2.Eta());
		c2->cd(4);
		H_22->Fill(e2.Phi());
		c2->cd(6);
		H_23->Fill(e2.Pt());
		c2->cd(8);
		H_24->Fill(e2.CosTheta());
		c2->cd(10);
		H_25->Fill(e2.P());

		TLorentzVector sum;
		sum = e1 + e2;		
		
		c4->cd(1);
		j_1->Fill(sum.Pt());

		//Creation of e^+e^- distributions in the lab frame. Do do that we 
		//need to boost the 4-momentum of the two particles back to the 
		//lab frame using the b vector we found above 		
		
		std::cout << "e1 magnitute = "<< e1.Mag() << "e2 magnitute = "<< e2.Mag() <<std::endl;

		//HERE IS WHERE ALL THE PROBLEMS START		
		//1st Rapidity is not invariant
		//2nd Phi is not invariant
		//3rd The Magnitute of the 4vectors is not invariant
		
		e1.Boost( g1.BoostVector() );//or e1.Boost( beta);
		e2.Boost( g1.BoostVector() );
		c3->cd(1);
		h_31->Fill(e1.Rapidity());
		c3->cd(3);
		h_32->Fill(e1.Phi());
		c3->cd(5);
		h_33->Fill(e1.Pt());
		c3->cd(7);
		h_34->Fill(e1.CosTheta());
		c3->cd(9);		
		h_35->Fill(e1.P());
		c3->cd(2);
		H_31->Fill(e2.Rapidity());
		c3->cd(4);
		H_32->Fill(e2.Phi());
		c3->cd(6);
		H_33->Fill(e2.Pt());
		c3->cd(8);
		H_34->Fill(e2.CosTheta());
		c3->cd(10);
		H_35->Fill(e2.P());

		std::cout << "After boost to lab frame:	e1 magnitute = "<< e1.Mag() << "e2 magnitute = "<< e2.Mag() <<std::endl;
		
		sum.Boost( g1.BoostVector() );

		c4->cd(2);
		j_2->Fill(sum.Pt());
		
		}		
	c1->cd(1);
	h_11->Draw();
	c1->cd(2);
	h_12->Draw();
	c1->cd(3);
	h_13->Draw();

	c2->cd(1);
	h_21->Draw();
	c2->cd(3);
	h_22->Draw();
	c2->cd(5);
	h_23->Draw();
	c2->cd(7);
	h_24->Draw();
	c2->cd(9);
	h_25->Draw();
	c2->cd(2);
	H_21->Draw();
	c2->cd(4);
	H_22->Draw();
	c2->cd(6);
	H_23->Draw();
	c2->cd(8);
	H_24->Draw();
	c2->cd(10);
	H_25->Draw();

	c3->cd(1);
	h_31->Draw();
	c3->cd(3);
	h_32->Draw();
	c3->cd(5);
	h_33->Draw();
	c3->cd(7);
	h_34->Draw();
	c3->cd(9);		
	h_35->Draw();
	c3->cd(2);
	H_31->Draw();
	c3->cd(4);
	H_32->Draw();
	c3->cd(6);
	H_33->Draw();
	c3->cd(8);
	H_34->Draw();
	c3->cd(10);
	H_35->Draw();

	c4->cd(1);
	j_1->Draw();
	c4->cd(2);
	j_2->Draw();

			
	}

