#include "../include/folder.h"

Folder::Folder(const string& name): folderName(name) {};
Folder::~Folder(){};


void Folder::createNote(const string& name){};
void Folder::deleteNote(const string& name){};
void Folder::addContentToNote(const string& noteName){};
void Folder::printNote(const string& name){};
bool Folder::noteExists(const string& name){
    return false; //fix this, just had to add this so complier stopped complaining
};


void Folder::setFolderName(const string& name){
    folderName = name;

}
const string& Folder::getFolderName(){
    return folderName;
};

