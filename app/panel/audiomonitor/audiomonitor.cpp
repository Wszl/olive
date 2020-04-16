/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#include "audiomonitor.h"

OLIVE_NAMESPACE_ENTER

AudioMonitorPanel::AudioMonitorPanel(QWidget *parent) :
  PanelWidget(parent)
{
  // FIXME: This won't work if there's ever more than one of this panel
  setObjectName("AudioMonitor");

  audio_monitor_ = new AudioMonitor(this);

  setWidget(audio_monitor_);

  Retranslate();
}

void AudioMonitorPanel::Retranslate()
{
  SetTitle(tr("Audio Monitor"));
}

OLIVE_NAMESPACE_EXIT