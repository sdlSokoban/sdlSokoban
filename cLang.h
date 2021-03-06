/*
  SDL SOKOBAN - The Sokoban Game Clone write in C++/SDL
  Copyright (C) 2012 Ericson Norberto <sdlsokoban@gmail.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef CLANG_H
    #define CLANG_H

#include "cDefines.h"
#include "cIni.h"

class cLang {
    public:
        cLang();
        virtual ~cLang();
        
        bool LoadLanguageFile(std::string File, std::string Language, int TotalLabels);
        std::string ReadLabel(int MessageID);
        
        int LenghtLabel(int MessageID);
        
    private:
        
        cIni lng_IniLanguage;
        
        std::vector<string> lng_Label;
};
#endif	/* CLANG_H */