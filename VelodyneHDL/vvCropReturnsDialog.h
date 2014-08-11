// Copyright 2014 Velodyne Acoustics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef __vvCropReturnsDialog_h
#define __vvCropReturnsDialog_h

#include "vvConfigure.h"

#include <QDialog>
#include <QVector3D>

class VelodyneHDLPlugin_EXPORT vvCropReturnsDialog : public QDialog
{
  Q_OBJECT
  Q_PROPERTY(bool croppingEnabled READ croppingEnabled)
  Q_PROPERTY(QVector3D firstCorner READ firstCorner)
  Q_PROPERTY(QVector3D secondCorner READ secondCorner)

public:
  vvCropReturnsDialog(QWidget *p=0);
  virtual ~vvCropReturnsDialog();

  bool croppingEnabled() const;

  QVector3D firstCorner() const;
  QVector3D secondCorner() const;

public slots:
  virtual void accept();

private:
  class pqInternal;
  QScopedPointer<pqInternal> Internal;

  Q_DISABLE_COPY(vvCropReturnsDialog);
};

#endif
