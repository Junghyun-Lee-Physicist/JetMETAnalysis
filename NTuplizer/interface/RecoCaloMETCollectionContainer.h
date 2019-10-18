#ifndef JMETriggerAnalysis_RecoCaloMETCollectionContainer_h
#define JMETriggerAnalysis_RecoCaloMETCollectionContainer_h

#include <JMETriggerAnalysis/NTuplizer/interface/VCollectionContainer.h>
#include <DataFormats/METReco/interface/CaloMETFwd.h>

class RecoCaloMETCollectionContainer : public VCollectionContainer<reco::CaloMETCollection> {

 public:
  explicit RecoCaloMETCollectionContainer(const std::string&, const std::string&, const edm::EDGetToken&);
  virtual ~RecoCaloMETCollectionContainer() {}

  void clear();
  void fill(const reco::CaloMETCollection&);

  std::vector<float>& vec_pt(){ return pt_; }
  std::vector<float>& vec_phi(){ return phi_; }
  std::vector<float>& vec_sumEt(){ return sumEt_; }

 protected:
  std::vector<float> pt_;
  std::vector<float> phi_;
  std::vector<float> sumEt_;
};

#endif