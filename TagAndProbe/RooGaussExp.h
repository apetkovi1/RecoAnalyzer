/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/
#ifndef ROOGAUSSEXP
#define ROOGAUSSEXP
#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
class RooGaussExp : public RooAbsPdf {
 public:
  RooGaussExp() {} ;
  RooGaussExp(const char *name, const char *title,
	   RooAbsReal& _m,
	   RooAbsReal& _m0,
	   RooAbsReal& _sigma,
	   RooAbsReal& _alpha);
  RooGaussExp(const RooGaussExp& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooGaussExp(*this,newname); }
  // inline virtual ~RooGaussExp() { }

  virtual Int_t getAnalyticalIntegral( RooArgSet& allVars,  RooArgSet& analVars, const char* rangeName=0 ) const;
  virtual Double_t analyticalIntegral( Int_t code, const char* rangeName=0 ) const;

 protected:
  RooRealProxy m ;
  RooRealProxy m0 ;
  RooRealProxy sigma ;
  RooRealProxy alpha ;
  Double_t evaluate() const ;

  double gaussianIntegral(double tmin, double tmax) const;
  double tailIntegral(double tmin, double tmax, double alpha) const;

 private:
  ClassDef(RooGaussExp,1) // Your description goes here...
};
#endif
