/*
  Hatari - midi.h

  This file is distributed under the GNU General Public License, version 2
  or at your option any later version. Read the file gpl.txt for details.
*/

#ifndef HATARI_MIDI_H
#define HATARI_MIDI_H

extern void Midi_Init(void);
extern void Midi_UnInit(void);
extern void Midi_Reset(void);
extern void MIDI_MemorySnapShot_Capture(bool bSave);

extern void Midi_Control_ReadByte(void);
extern void Midi_Data_ReadByte(void);
extern void Midi_Control_WriteByte(void);
extern void Midi_Data_WriteByte(void);
extern void Midi_InterruptHandler_Update(void);

#ifdef HAVE_PORTMIDI
extern const char* Midi_Host_GetPortName(const char *name, int offset, bool forInput);
#endif

#endif
