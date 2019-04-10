Create the following tables. Be aware that the tables are not listed in the
order that they need to be created. You need to get them in the proper order.
Remember that if a table has a Foreign Key reference to another table, the other
table needs to be created first.

**Create a table called ALBUM that has the following fields:**

- AlbumId  that is a number 3 digits long with no decimals and is required and
    is the Primary Key,
- Title  that is a string of length 160 and is required,
- ArtistId  that is a number 3 digits long with no decimals and is required.
    Make this a FK to ArtistID in Artist table

**Create a table called ARTIST that has the following fields:**

- ArtistId  that is a number 3 digits long with no decimals and is the primary
    key and is required,
- Name that is a string of length 120 and is required

**Create a table called Genre that has the following fields:**

- GenreID that is a number 3 digits long with no decimals and is required and is
    the Primary Key
- Name that is a string of length 120 and is required

**Create a table called  MediaType that has the following fields:**

- MediaTypeID that is a number 3 digits long with no decimals and is required
    and is the Primary Key
- Name that is a string of length 120 and is required

**Create a table called Track that has the following fields**

- TrackId that is a number 4 digits long with no decimals and is required and is
    the primary key,
- Name that is a string of length 200 and is required,
- AlbumId  that is a number 3 digits long with no decimals , make this a FK to
    AlbumID and references the Album table
- MediaTypeId  that is a number 3 digits long with no decimals and is required
    and make this a FK to MediaTypeID in the MediaType table
- GenreId that is a number 3 digits long with no decimals and is a FK to
    GenreID in Genre table
- Composer  that is a string of length  220,
- Milliseconds  that is number of length 10 digits and is required,
- Bytes that is a number of length 10 digits and is required,
- UnitPrice  that is a number of length 10 with 2 decimals and is required

**Add the following GenreIDs and Names to the Genre table:**

 1 Rock
 2 Jazz
 3 Metal
 4 Alternative Punk
 5 Rock And Roll
 6 Blues
 7 Latin
 8 Reggae
 9 Pop
10 Soundtrack
11 Bossa Nova
12 Easy Listening
13 Heavy Metal
14 RB Soul
15 Electronica Dance
16 World
17 Hip Hop Rap
18 Science Fiction
19 TV Shows
20 Sci Fi and Fantasy
21 Drama
22 Comedy
23 Alternative
24 Classical   
25 Opera

**Insert the following Media Type ID and names into the MediaType Table:**

1, MPEG audio file
2, Protected AAC audio file
3, Protected MPEG4 video file
4, Purchased AAC audio file
5, AAC audio file

**Insert the following artist IDs and names into the Artist table:**

 1 AC DC
 2 Accept
 3 Aerosmith
 4 Alanis Morissette
 5 Alice In Chains
 6 Antonio Carlos Jobim
 7 Apocalyptica
 8 Audioslave
 9 BackBeat
10 Billy Cobham
11 Black Label Society
12 Black Sabbath

**Insert the following AlbumIDs, Titles and ArtistIDs into the Album Table:**

  1 For Those About To Rock We Salute You 1
  2 Balls to the Wall 2
  3 Restless and Wild 2
  4 Let There Be Rock 1
  5 Big Ones 3
  6 Jagged Little Pill 4
  7 Facelift 5
  8 Warner 25 Anos 6
  9 Plays Metallica By Four Cellos 7
 10 Audioslave 8
 11 Out Of Exile 8
 12 BackBeat Soundtrack 9
 13 The Best Of Billy Cobham 10
 14 Alcohol Fueled Brewtality Live! [Disc 1] 11
 15 Alcohol Fueled Brewtality Live! [Disc 2] 11
 16 Black Sabbath 12
 17 Black Sabbath Vol. 4 (Remaster) 12
 34 Chill: Brazil (Disc 2) 6
271 Revelations 8

 **Add the following TrackID, Name, AlbumID, MediaTypeID, GenreID, Composer, Milliseconds, Bytes, and UnitPrice to the Track table:**

   1 For Those About To Rock (We Salute You) 1 1 1 Angus Young, Malcolm Young, Brian Johnson 343719 11170334 0.99
   6 Put The Finger On You 1 1 1 Angus Young, Malcolm Young, Brian Johnson 205662 6713451 0.99
   2 Balls to the Wall 2 2 1  342562 5510424 0.99
   3 Fast As a Shark 3 2 1 F. Baltes, S. Kaufman, U. Dirkscneider and W. Hoffman 230619 3990994 0.99
   4 Restless and Wild 3 2 1 F. Baltes, R.A. Smith-Diesel, S. Kaufman, U. Dirkscneider and W. Hoffman 252051 4331779 0.99
  16 Dog Eat Dog 4 1 1 AC DC 215196 7032162 0.99
  17 Let There Be Rock 4 1 1 AC DC 366654 12021261 0.99
  23 Walk On Water 5 1 1 Steven Tyler, Joe Perry, Jack Blades, Tommy Shaw 295680 9719579 0.99
  24 Love In An Elevator 5 1 1 Steven Tyler, Joe Perry 321828 10552051 0.99
  38 All I Really Want 6 1 1 Alanis Morissette and Glenn Ballard 284891 9375567 0.99
  39 You Oughta Know 6 1 1 Alanis Morissette and Glenn Ballard 249234 8196916 0.99
  40 Perfect 6 1 1 Alanis Morissette and Glenn Ballard 188133 6145404 0.99
  51 We Die Young 7 1 1 Jerry Cantrell 152084 4925362 0.99
  52 Man In The Box 7 1 1 Jerry Cantrell, Layne Staley 286641 9310272 0.99
  63 Desafinado 8 1 2  185338 5990473 0.99
  64 Garota De Ipanema 8 1 2 285048 9348428 0.99
  77 Enter Sandman 9 1 3 Apocalyptica 221701 7286305 0.99
  78 Master Of Puppets 9 1 3 Apocalyptica 436453 14375310 0.99
  85 Cochise 10 1 1 Audioslave Chris Cornell 222380 5339931 0.99
  86 Show Me How to Live 10 1 1 Audioslave Chris Cornell 277890 6672176 0.99
  99 Your Time Has Come 11 1 4 Cornell, Commerford, Morello, Wilk 255529 8273592 0.99
 100 Out Of Exile 11 1 4 Cornell, Commerford, Morello, Wilk 291291 9506571 0.99 
 111 Money 12 1 5 Berry Gordy, Jr. Janie Bradford 147591 2365897 0.99
 112 Long Tall Sally 12 1 5 Enotris Johnson Little Richard Robert "Bumps" Blackwell 106396 1707084 0.99
 123 Quadrant 13 1 2 Billy Cobham 261851 8538199 0.99
 124 Snoopy's search-Red baron 13 1 2 Billy Cobham 456071 15075616 0.99
 131 Intro/ Low Down 14 1 3  323683 10642901 0.99
 132 13 Years Of Grief 14 1 3  246987 8137421 0.99
 144 Heart Of Gold 15 1 3  194873 6417460 0.99
 145 Snowblind 15 1 3  420022 13842549 0.99
 149 Black Sabbath 16 1 3  382066 12440200 0.99 
 150 The Wizard 16 1 3  264829 8646737 0.99
 156 Wheels Of Confusion The Straightener 17 1 3 Tony Iommi, Bill Ward, Geezer Butler, Ozzy Osbourne 494524 16065830 0.99
 157 Tomorrow's Dream 17 1 3 Tony Iommi, Bill Ward, Geezer Butler, Ozzy Osbourne 192496 6252071 0.99 
 403 Bumbo Da Mangueira 34 1 7 Various 270158 9073350 0.99 
 404 Mr Funk Samba 34 1 7 Various 213890 7102545 0.99
3389 Revelations 271 2 23  252376 4111051 0.99 
3390 One and the Same 271 2 23  217732 3559040 0.99