#ifndef __FOLDER_H__
#define __FOLDER_H__

#include "../include/note.h"

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include "note.h"
using namespace std;

class Folder {
    private:
        string folderName;
        vector<Note> notes; 
    public:
        Folder();
        Folder(const string& name);
        ~Folder();

        const string& getFolderName();
        void AddNotetoFolder(Note& noteToAdd);
        void createNote(const string& name); //might be redundant /unneeded
        void setFolderName(const string& name);
      
        void deleteNote(const string& name);
        void addContentToNote(const string& noteName);
        void printNote(const string& name);
        void printAllNoteTitles();
        bool empty();
        bool noteExists(const string& name);
};

#endif 