#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
#include <iostream>
using namespace std;

//Found a way to assert exception is thrown on this git-repo :
//https://github.com/onqtam/doctest/blob/master/doc/markdown/assertions.md

//Some test cases has checks for exceptions

TEST_CASE("The Little Prince by Antoine de Saint-Exupery") {
	string text = "The most beautiful things in the world cannot be seen or touched , they are felt with the heart";
	CHECK(find(text, "feaotyful") == string("beautiful"));
	CHECK(find(text, "duochet") == string("touched"));
	CHECK(find(text, "belt") == string("felt"));
	CHECK_THROWS_AS(find(text, "De"), std::exception);
	CHECK_THROWS_AS(find(text, "little"), std::exception);
	CHECK_THROWS_AS(find(text, "Prince"), std::exception);
}

TEST_CASE("Test replacement of v and w") {
    string text = "valerie do you wanna build a snovman in the Snow";
    CHECK(find(text, "Snowman") == string("snovman"));
    CHECK(find(text, "vanna") == string("wanna"));
    CHECK(find(text, "wanna") != string("Wanna"));
    CHECK(find(text, "Snovman") == string("snovman"));
	CHECK(find(text, "walerie") == string("valerie"));
	CHECK(find(text, "valerie") != string("valer"));
	CHECK(find(text, "wanna") != string("wana"));
	CHECK(find(text, "sNow") != string("snow"));
	CHECK_THROWS_AS(find(text, "wanan"), std::exception);
	CHECK_THROWS_AS(find(text, "snor"), std::exception);
	CHECK_THROWS_AS(find(text, "valeries"), std::exception);
}

TEST_CASE("Test replacement of b and f") {
    string text = "get Back to flack before Abe comes bac";
    CHECK(find(text, "fack") == string("Back"));
    CHECK(find(text, "back") == string("Back"));
    CHECK(find(text, "black") == string("flack"));
    CHECK(find(text, "Flack") == string("flack"));
	CHECK(find(text, "abe") == string("Abe"));
    CHECK(find(text, "Before") == string("before"));
    CHECK(find(text, "fac") == string("bac"));
    CHECK(find(text, "bac") != string("Back"));
	CHECK_THROWS_AS(find(text, "dack"), std::exception);
	CHECK_THROWS_AS(find(text, "ret"), std::exception);
	CHECK_THROWS_AS(find(text, "gAbe"), std::exception);
}

TEST_CASE("Test replacement of b and p") {
    string text = "Boys Blay with Blains and lego pricks";
    CHECK(find(text, "boys") == string("Boys"));
    CHECK(find(text, "Play") == string("Blay"));
    CHECK(find(text, "plains") == string("Blains"));
    CHECK(find(text, "Bricks") == string("pricks"));
	CHECK(find(text, "Poys") == string("Boys"));
    CHECK(find(text, "Blay") != string("Klay"));
    CHECK(find(text, "plains") != string("BLAins"));
    CHECK(find(text, "Bricks") != string("prick"));
	CHECK_THROWS_AS(find(text, "wit"), std::exception);
	CHECK_THROWS_AS(find(text, "legos"), std::exception);
}

TEST_CASE("Test replacement of f and p") {
    string text = "pay with Paypal for funny cups";
    CHECK(find(text, "Fay") == string("pay"));
    CHECK(find(text, "por") == string("for"));
    CHECK(find(text, "Punny") == string("funny"));
    CHECK(find(text, "cufs") == string("cups"));
	CHECK(find(text, "Paypal") == string("Paypal"));
	CHECK(find(text, "por") != string("For"));
    CHECK(find(text, "Punny") != string("Funny"));
    CHECK(find(text, "cufs") != string("CUPS"));
	CHECK(find(text, "Fayfal") == string("Paypal"));
	CHECK_THROWS_AS(find(text, "Day"), std::exception);
	CHECK_THROWS_AS(find(text, "great"), std::exception);
}

TEST_CASE("Test replacement of g and j") {
    string text = "great Job Jessica johnes";
    CHECK(find(text, "Great") == string("great"));
    CHECK(find(text, "gob") == string("Job"));
    CHECK(find(text, "jessica") == string("Jessica"));
    CHECK(find(text, "Gohnes") == string("johnes"));
	CHECK(find(text, "Great") != string("Great"));
    CHECK(find(text, "gob") != string("job"));
    CHECK(find(text, "Gessica") == string("Jessica"));
    CHECK(find(text, "Gohnes") != string("Johnes"));
	CHECK_THROWS_AS(find(text, "Thor"), std::exception);
	CHECK_THROWS_AS(find(text, "and"), std::exception);
	CHECK_THROWS_AS(find(text, "Dr"), std::exception);
	CHECK_THROWS_AS(find(text, "jones"), std::exception);
}

TEST_CASE("Test replacement of c and k") {
    string text = "cupkaces made of chokclate";
    CHECK(find(text, "CupCaKes") == string("cupkaces"));
    CHECK(find(text, "CUPKACES") == string("cupkaces"));
    CHECK(find(text, "khocklate") == string("chokclate"));
    CHECK(find(text, "CHokKlate") == string("chokclate"));
	CHECK(find(text, "CUPKACES") != string("Cupkaces"));
    CHECK(find(text, "khocklate") != string("chokclats"));
	CHECK_THROWS_AS(find(text, "What"), std::exception);
	CHECK_THROWS_AS(find(text, "A"), std::exception);
}

TEST_CASE("Test replacement of c and q") {
    string text = "A snipers greatest tool is precision  and good equipment";
    CHECK(find(text, "PREQisioN") == string("precision"));
	CHECK(find(text, "PREQisioN") != string("Precision"));
    CHECK(find(text, "precisioN") == string("precision"));
    CHECK(find(text, "equipMENT") == string("equipment"));
    CHECK(find(text, "ECuipmENt") == string("equipment"));
	CHECK_THROWS_AS(find(text, "Wonderfull"), std::exception);
	CHECK_THROWS_AS(find(text, "World"), std::exception);
}

TEST_CASE("Test replacement of k and q") {
    string text = "kraqkan will sink your qrown korqi ";
    CHECK(find(text, "qraQqan") == string("kraqkan"));
    CHECK(find(text, "SINQ") == string("sink"));
    CHECK(find(text, "KrowN") == string("qrown"));
    CHECK(find(text, "korQI") == string("korqi"));
	CHECK(find(text, "qraQqan") != string("kraQKan"));
    CHECK(find(text, "SINQ") != string("SINQ"));
    CHECK(find(text, "KrowN") != string("Qrown"));
    CHECK(find(text, "korkI") == string("korqi"));
}

TEST_CASE("Test replacement of s and z") {
    string text = "Pizza is a wise Choice";
    CHECK(find(text, "PIzsa") == string("Pizza"));
    CHECK(find(text, "pissa") == string("Pizza"));
    CHECK(find(text, "iS") == string("is"));
    CHECK(find(text, "wize") == string("wise"));
    CHECK(find(text, "pissa") != string("pizza"));
    CHECK(find(text, "iS") != string("Is"));
    CHECK(find(text, "wyze") == string("wise"));
}

TEST_CASE("Test replacement of d and t") {
    string text = "dont touch my donounts";
    CHECK(find(text, "tond") == string("dont"));
    CHECK(find(text, "Douch") == string("touch"));
    CHECK(find(text, "tonounDs") == string("donounts"));
    CHECK(find(text, "donounTS") == string("donounts"));
	CHECK(find(text, "tont") == string("dont"));
    CHECK(find(text, "Douch") != string("Touch"));
    CHECK(find(text, "tonounDs") != string("Donounts"));
    CHECK(find(text, "donoundS") == string("donounts"));
}

TEST_CASE("Test replacement of o and u") {
    string text = "you can count me in i want some bounty";
    CHECK(find(text, "YOU") == string("you"));
    CHECK(find(text, "Coont") == string("count"));
    CHECK(find(text, "BUONTY") == string("bounty"));
    CHECK(find(text, "BuUnty") == string("bounty"));
	CHECK(find(text, "bounty") != string("dounty"));
	CHECK(find(text, "some") == string("some"));
	CHECK(find(text, "SUme") == string("some"));
	CHECK(find(text, "some") != string("Some"));
}

TEST_CASE("Test replacement of i and y") {
    string text = "you play yi for the fifth time today";
    CHECK(find(text, "iou") == string("you"));
    CHECK(find(text, "PLAI") == string("play"));
    CHECK(find(text, "ii") == string("yi"));
    CHECK(find(text, "FYFth") == string("fifth"));
	CHECK(find(text, "Tyme") == string("time"));
	CHECK(find(text, "todai") == string("today"));
	CHECK(find(text, "FiFtH") == string("fifth"));
	CHECK(find(text, "Time") == string("time"));
	CHECK(find(text, "todai") != string("toda"));
}
