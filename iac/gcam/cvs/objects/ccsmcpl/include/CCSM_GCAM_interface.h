/*
* \author John Truesdale
*/

#include "util/base/include/definitions.h"

// include standard libraries
#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <list>

// xerces xml headers
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include "util/base/include/xml_helper.h"

// include custom headers
#include "util/base/include/configuration.h"
#include "containers/include/ccsm_scenario.h"
#include "containers/include/ccsm_scenario_runner.h"
#include "containers/include/iscenario_runner.h"
#include "containers/include/scenario_runner_factory.h"
#include "containers/include/region.h"
#include "util/logger/include/ilogger.h"
#include "util/logger/include/logger_factory.h"
#include "util/base/include/timer.h"
#include "util/base/include/version.h"
#include "reporting/include/get_glm_data.h"
#include "reporting/include/rcp_emissions_visitor.h"
#include "land_allocator/include/set_carbon_density.h"

using namespace std;
using namespace xercesc;


class CCSM_GCAM_interface {
 public:
  CCSM_GCAM_interface();
  ~CCSM_GCAM_interface();
  void initGCAM();
  void setDensityGCAM(int *yyyymmdd, int *tod, double *gcami, int *gcami_fdim1_nflds, int *gcami_fdim2_datasize);
  void runGCAM(int *yyyymmdd, int *tod, double *gcami, int *gcami_fdim1_nflds, int *gcami_fdim2_datasize, double *gcamo,int *gcamo_fdim1_nflds,int *gcamo_fdim2_datasize, double *gcamoemis,int *gcamoemis_fdim1_nflds,int *gcamoemis_fdim2_datasize,int* yr1, int *yr2,int *sneakermode,int *write_rest);
  void finalizeGCAM();
  int gcamStartYear;
  int gcamEndYear;
  //int yearToCalculate;
  //int lastYearCalculated;
  //int startDate;
  //int startTOD;
  //  int timeStep;
  //int period;
  //int modelyear;
  //int prevyear;
  //int gcamoyear[2];
  //int curryear;
  //int gcamperiod;
  //bool firstTime;
  static std::vector<std::string> regionName; // 
  static std::vector<std::string> landType; // 
  static std::vector<std::string> cropName; // 

 private:
  //  std::auto_ptr<IScenarioRunner> runner;
    typedef std::vector<Region*>::iterator RegionIterator;
};
