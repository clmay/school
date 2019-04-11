/***************************************
DROP TABLES (remove dependencies first)
***************************************/

/*
DROP TABLE track;
DROP TABLE album;
DROP TABLE artist;
DROP TABLE genre;
DROP TABLE mediatype;
*/

/*************
CREATE TABLES
*************/

CREATE TABLE mediatype (
    mediatypeID NUMBER(3) NOT NULL,
    name VARCHAR(120) NOT NULL
);

CREATE TABLE genre (
    genreID NUMBER(3) NOT NULL,
    name VARCHAR(120) NOT NULL
);

CREATE TABLE artist (
    artistID NUMBER(3) NOT NULL,
    name VARCHAR(120) NOT NULL
);

CREATE TABLE album (
    albumID NUMBER(3) NOT NULL,
    title VARCHAR(160) NOT NULL,
    artistID NUMBER(3) NOT NULL
);

CREATE TABLE track (
    trackID NUMBER(4) NOT NULL,
    name VARCHAR(200) NOT NULL,
    albumID NUMBER(3),
    mediatypeID NUMBER(3),
    genreID NUMBER(3),
    composer VARCHAR(220),
    milliseconds NUMBER(10) NOT NULL,
    bytes NUMBER(10) NOT NULL,
    unitprice NUMBER(10, 2) NOT NULL
);

/*******************
CREATE PRIMARY KEYS
*******************/

ALTER TABLE mediatype
ADD CONSTRAINT PK_mediatype_mediatypeID PRIMARY KEY (mediatypeID);

ALTER TABLE genre
ADD CONSTRAINT PK_genre_genreID PRIMARY KEY (genreID);

ALTER TABLE artist
ADD CONSTRAINT PK_artist_artistID PRIMARY KEY (artistID);

ALTER TABLE album
ADD CONSTRAINT PK_album_albumID PRIMARY KEY (albumID);

ALTER TABLE track
ADD CONSTRAINT PK_track_trackID PRIMARY KEY (trackID);

/*******************
CREATE FOREIGN KEYS
*******************/

ALTER TABLE album
ADD CONSTRAINT FK_album_artistID FOREIGN KEY (artistID) REFERENCES artist(artistID);

ALTER TABLE track
ADD CONSTRAINT FK_track_albumID FOREIGN KEY (albumID) REFERENCES album(albumID);

ALTER TABLE track
ADD CONSTRAINT FK_track_mediatypeID FOREIGN KEY (mediatypeID) REFERENCES mediatype(mediatypeID);

ALTER TABLE track
ADD CONSTRAINT FK_track_genre FOREIGN KEY (genreID) REFERENCES genre(genreID);

/***********
INSERT DATA
***********/

/* Media Types */

INSERT ALL
    INTO mediatype(mediatypeID, name) VALUES (1, 'MPEG audio file')
    INTO mediatype(mediatypeID, name) VALUES (2, 'Protected AAC audio file')
    INTO mediatype(mediatypeID, name) VALUES (3, 'Protected MPEG4 video file')
    INTO mediatype(mediatypeID, name) VALUES (4, 'Purchased AAC audio file')
    INTO mediatype(mediatypeID, name) VALUES (5, 'AAC audio file')
SELECT 1 FROM DUAL;

/* Genres */

INSERT ALL
    INTO genre(genreID, name) VALUES (1, 'Rock')
    INTO genre(genreID, name) VALUES (2, 'Jazz')
    INTO genre(genreID, name) VALUES (3, 'Metal')
    INTO genre(genreID, name) VALUES (4, 'Alternative Punk')
    INTO genre(genreID, name) VALUES (5, 'Rock And Roll')
    INTO genre(genreID, name) VALUES (6, 'Blues')
    INTO genre(genreID, name) VALUES (7, 'Latin')
    INTO genre(genreID, name) VALUES (8, 'Reggae')
    INTO genre(genreID, name) VALUES (9, 'Pop')
    INTO genre(genreID, name) VALUES (10, 'Soundtrack')
    INTO genre(genreID, name) VALUES (11, 'Bossa Nova')
    INTO genre(genreID, name) VALUES (12, 'Easy Listening')
    INTO genre(genreID, name) VALUES (13, 'Heavy Metal')
    INTO genre(genreID, name) VALUES (14, 'RB Soul')
    INTO genre(genreID, name) VALUES (15, 'Electronica Dance')
    INTO genre(genreID, name) VALUES (16, 'World')
    INTO genre(genreID, name) VALUES (17, 'Hip Hop Rap')
    INTO genre(genreID, name) VALUES (18, 'Science Fiction')
    INTO genre(genreID, name) VALUES (19, 'TV Shows')
    INTO genre(genreID, name) VALUES (20, 'Sci Fi and Fantasy')
    INTO genre(genreID, name) VALUES (21, 'Drama')
    INTO genre(genreID, name) VALUES (22, 'Comedy')
    INTO genre(genreID, name) VALUES (23, 'Alternative')
    INTO genre(genreID, name) VALUES (24, 'Classical')
    INTO genre(genreID, name) VALUES (25, 'Opera')
SELECT 1 FROM DUAL;

/* Artists */

INSERT ALL
    INTO artist(artistID, name) VALUES (1, 'AC DC')
    INTO artist(artistID, name) VALUES (2, 'Accept')
    INTO artist(artistID, name) VALUES (3, 'Aerosmith')
    INTO artist(artistID, name) VALUES (4, 'Alanis Morissette')
    INTO artist(artistID, name) VALUES (5, 'Alice In Chains')
    INTO artist(artistID, name) VALUES (6, 'Antonio Carlos Jobim')
    INTO artist(artistID, name) VALUES (7, 'Apocalyptica')
    INTO artist(artistID, name) VALUES (8, 'Audioslave')
    INTO artist(artistID, name) VALUES (9, 'BackBeat')
    INTO artist(artistID, name) VALUES (10, 'Billy Cobham')
    INTO artist(artistID, name) VALUES (11, 'Black Label Society')
    INTO artist(artistID, name) VALUES (12, 'Black Sabbath')
SELECT 1 FROM DUAL;

/* Albums */

INSERT ALL
    INTO album(albumID, title, artistID) VALUES (1, 'For Those About To Rock We Salute You', 1)
    INTO album(albumID, title, artistID) VALUES (2, 'Balls to the Wall', 2)
    INTO album(albumID, title, artistID) VALUES (3, 'Restless and Wild', 2)
    INTO album(albumID, title, artistID) VALUES (4, 'Let There Be Rock', 1)
    INTO album(albumID, title, artistID) VALUES (5, 'Big Ones', 3)
    INTO album(albumID, title, artistID) VALUES (6, 'Jagged Little Pill', 4)
    INTO album(albumID, title, artistID) VALUES (7, 'Facelift', 5)
    INTO album(albumID, title, artistID) VALUES (8, 'Warner 25 Anos', 6)
    INTO album(albumID, title, artistID) VALUES (9, 'Plays Metallica By Four Cellos', 7)
    INTO album(albumID, title, artistID) VALUES (10, 'Audioslave', 8)
    INTO album(albumID, title, artistID) VALUES (11, 'Out Of Exile', 8)
    INTO album(albumID, title, artistID) VALUES (12, 'BackBeat Soundtrack', 9)
    INTO album(albumID, title, artistID) VALUES (13, 'The Best Of Billy Cobham', 10)
    INTO album(albumID, title, artistID) VALUES (14, 'Alcohol Fueled Brewtality Live! [Disc 1]', 11)
    INTO album(albumID, title, artistID) VALUES (15, 'Alcohol Fueled Brewtality Live! [Disc 2]', 11)
    INTO album(albumID, title, artistID) VALUES (16, 'Black Sabbath', 12)
    INTO album(albumID, title, artistID) VALUES (17, 'Black Sabbath Vol. 4 (Remaster)', 12)
    INTO album(albumID, title, artistID) VALUES (34, 'Chill: Brazil (Disc 2)', 6)
    INTO album(albumID, title, artistID) VALUES (271, 'Revelations', 8)
SELECT 1 FROM DUAL;

/* Tracks */

INSERT ALL
    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (1, 'For Those About To Rock (We Salute You)', 1, 1, 1, 'Angus Young, Malcolm Young, Brian Johnson', 343719, 11170334, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (6, 'Put The Finger On You', 1, 1, 1, 'Angus Young, Malcolm Young, Brian Johnson', 205662, 6713451, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (2, 'Balls to the Wall', 2, 2, 1, NULL, 342562, 5510424, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (3, 'Fast As a Shark', 3, 2, 1, 'F. Baltes, S. Kaufman, U. Dirkscneider and W. Hoffman', 230619, 3990994, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (4, 'Restless and Wild', 3, 2, 1, 'F. Baltes, R.A. Smith-Diesel, S. Kaufman, U. Dirkscneider and W. Hoffman', 252051, 4331779, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (16, 'Dog Eat Dog', 4, 1, 1, 'AC DC', 215196, 7032162, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (17, 'Let There Be Rock', 4, 1, 1, 'AC DC', 366654, 12021261, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (23, 'Walk On Water', 5, 1, 1, 'Steven Tyler, Joe Perry, Jack Blades, Tommy Shaw', 295680, 9719579, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (24, 'Love In An Elevator', 5, 1, 1, 'Steven Tyler, Joe Perry', 321828, 10552051, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (38, 'All I Really Want', 6, 1, 1, 'Alanis Morissette and Glenn Ballard', 284891, 9375567, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (39, 'You Oughta Know', 6, 1, 1, 'Alanis Morissette and Glenn Ballard', 249234, 8196916, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (40, 'Perfect', 6, 1, 1, 'Alanis Morissette and Glenn Ballard', 188133, 6145404, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (51, 'We Die Young', 7, 1, 1, 'Jerry Cantrell', 152084, 4925362, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (52, 'Man In The Box', 7, 1, 1, 'Jerry Cantrell, Layne Staley', 286641, 9310272, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (63, 'Desafinado', 8, 1, 2, NULL, 185338, 5990473, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (64, 'Garota De Ipanema', 8, 1, 2, NULL, 285048, 9348428, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (77, 'Enter Sandman', 9, 1, 3, 'Apocalyptica', 221701, 7286305, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (78, 'Master Of Puppets', 9, 1, 3, 'Apocalyptica', 436453, 14375310, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (85, 'Cochise', 10, 1, 1, 'Audioslave Chris Cornell', 222380, 5339931, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (86, 'Show Me How to Live', 10, 1, 1, 'Audioslave Chris Cornell', 277890, 6672176, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (99, 'Your Time Has Come', 11, 1, 4, 'Cornell, Commerford, Morello, Wilk', 255529, 8273592, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (100, 'Out Of Exile', 11, 1, 4, 'Cornell, Commerford, Morello, Wilk', 291291, 9506571, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (111, 'Money', 12, 1, 5, 'Berry Gordy, Jr. Janie Bradford', 147591, 2365897, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (112, 'Long Tall Sally', 12, 1, 5, 'Enotris Johnson, Little Richard, Robert "Bumps" Blackwell', 106396, 1707084, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (123, 'Quadrant', 13, 1, 2, 'Billy Cobham', 261851, 8538199, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (124, 'Snoopy''s Search/Red Baron', 13, 1, 2, 'Billy Cobham', 456071, 15075616, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (131, 'Intro/Low Down', 14, 1, 3, NULL, 323683, 10642901, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (132, '13 Years Of Grief', 14, 1, 3, NULL, 246987, 8137421, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (144, 'Heart Of Gold', 15, 1, 3, NULL, 194873, 6417460, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (145, 'Snowblind', 15, 1, 3, NULL, 420022, 13842549, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (149, 'Black Sabbath', 16, 1, 3, NULL, 382066, 12440200, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (150, 'The Wizard', 16, 1, 3, NULL, 264829, 8646737, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (156, 'Wheels Of Confusion/The Straightener', 17, 1, 3, 'Tony Iommi, Bill Ward, Geezer Butler, Ozzy Osbourne', 494524, 16065830, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (157, 'Tomorrow''s Dream', 17, 1, 3, 'Tony Iommi, Bill Ward, Geezer Butler, Ozzy Osbourne', 192496, 6252071, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (403, 'Bumbo Da Mangueira', 34, 1, 7, 'Various', 270158, 9073350, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (404, 'Mr Funk Samba', 34, 1, 7, 'Various', 213890, 7102545, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (3389, 'Revelations', 271, 2, 23, NULL, 252376, 4111051, 0.99)

    INTO track(trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice)
    VALUES (3390, 'One and the Same', 271, 2, 23, NULL, 217732, 3559040, 0.99)
SELECT 1 FROM DUAL;