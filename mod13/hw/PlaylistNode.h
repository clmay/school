#ifndef PLAYLISTNODE__INC__
#define PLAYLISTNODE__INC__

#include <string>
using namespace std;

class PlaylistNode
{
    private:
        string uniqueID;
        string songName;
        string artistName;
        int songLength;
        PlaylistNode* nextNodePtr;

    public:
        // Constructors
        PlaylistNode();
        PlaylistNode(string initID, string initSongName, string initArtistName,
                     int initSongLength, PlaylistNode* nextLoc = nullptr);
        // Getters
        string GetID() const;
        string GetSongName() const;
        string GetArtistName() const;
        int GetSongLength() const;
        PlaylistNode* GetNext() const;
        // Setters
        void SetNext(PlaylistNode* nodePtr);
        // Other Methods
        void Insert(PlaylistNode* nodePtr);
        void PrintPlaylistNode();
};

#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */