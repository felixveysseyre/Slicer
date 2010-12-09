/*==============================================================================

  Program: 3D Slicer

  Copyright (c) 2010 Kitware Inc.

  See Doc/copyright/copyright.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerScriptedLoadableModuleWidget_h
#define __qSlicerScriptedLoadableModuleWidget_h

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerBaseQTGUIExport.h"

class qSlicerScriptedLoadableModuleWidgetPrivate;

class Q_SLICER_BASE_QTGUI_EXPORT qSlicerScriptedLoadableModuleWidget
  :public qSlicerAbstractModuleWidget
{
  Q_OBJECT
  Q_PROPERTY(QString moduleName READ moduleName)
public:
  typedef qSlicerAbstractModuleWidget Superclass;
  typedef qSlicerScriptedLoadableModuleWidgetPrivate Pimpl;
  qSlicerScriptedLoadableModuleWidget(QWidget * parentWidget=0);
  virtual ~qSlicerScriptedLoadableModuleWidget();

  bool setPythonSource(const QString& newPythonSource);

  virtual void enter();
  virtual void exit();

protected:
  virtual void setup();
  
protected:
  QScopedPointer<qSlicerScriptedLoadableModuleWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerScriptedLoadableModuleWidget);
  Q_DISABLE_COPY(qSlicerScriptedLoadableModuleWidget);
};

#endif
