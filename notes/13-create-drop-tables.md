/* Create tables */

CREATE TABLE actor (
    actorID NUMBER(7) NOT NULL,
    actorFirstName VARCHAR(25) NOT NULL,
    actorLastName VARCHAR(50) NOT NULL,
    birthDate DATE NOT NULL
);

CREATE TABLE movie (
    movieId NUMBER(7) NOT NULL,
    title VARCHAR(50) NOT NULL,
    year NUMBER(4) NOT NULL,
    length NUMBER(3) NOT NULL,
    movieRating VARCHAR(4)
);

CREATE TABLE movieactor (
    actorID NUMBER(7) NOT NULL,
    movieID NUMBER(7) NOT NULL
);

/* Create primary keys */

ALTER TABLE actor
ADD CONSTRAINT PK_actor_actorID PRIMARY KEY (actorID);

ALTER TABLE movie
ADD CONSTRAINT PK_movie_movieID PRIMARY KEY (movieID);

ALTER TABLE movieactor
ADD CONSTRAINT PK_movieactor_movieID_actorID PRIMARY KEY (movieID, actorID);

/* Create foreign keys */

ALTER TABLE movieactor
ADD CONSTRAINT FK_movieactor_movieID FOREIGN KEY (movieID) REFERENCES movie(movieID);

ALTER TABLE movieactor
ADD CONSTRAINT FK_movieactor_actorID FOREIGN KEY (actorID) REFERENCES actor(actorID);

/* Insert data */

INSERT INTO movie
( )
VALUES
( );

/* Drop tables (in reverse order) */

DROP TABLE movieactor;
DROP TABLE movie;
DROP TABLE actor;