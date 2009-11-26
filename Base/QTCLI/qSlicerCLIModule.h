#ifndef __qSlicerCLIModule_h
#define __qSlicerCLIModule_h

#include "qSlicerAbstractModule.h"

#include "qSlicerBaseQTCLIWin32Header.h"

class Q_SLICER_BASE_QTCLI_EXPORT qSlicerCLIModule : public qSlicerAbstractModule
{
  
public:

  typedef qSlicerAbstractModule Superclass;
  qSlicerCLIModule(QWidget *parent=0);
  virtual ~qSlicerCLIModule();

  virtual void printAdditionalInfo();

  // Description:
  // Assign the module XML description.
  // Note: That will also trigger the parsing of the XML structure
  void setXmlModuleDescription(const char* xmlModuleDescription);

  virtual QString title()const;
  virtual QString category()const;
  virtual QString contributor()const;

  // Description:
  // Return help/acknowledgement text
  virtual QString helpText()const;
  virtual QString acknowledgementText()const;

  // Description:
  // Calling this method will loop trough the structure resulting
  // from the XML parsing and generate the corresponding UI.
  // Note: This method should be called after the XML description is set.
  void setupUi();

protected:
  // Description:
  // Overloaded
  virtual void setup();

private:
  struct qInternal;
  qInternal* Internal;
};

#endif
