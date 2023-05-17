#include "doctest.h"
#include "sources/Team.hpp"
#include "sources/Team2.hpp"
#include "sources/SmartTeam.hpp"

using namespace std;
using namespace ariel;

// point tests
TEST_CASE("Point constructors"){
    SUBCASE("Default constructor") {
        ariel::Point p;
        CHECK(p.getX() == 0.0);
        CHECK(p.getY() == 0.0);
    }

    SUBCASE("Parameterized constructor") {
        ariel::Point p(2.5, 3.8);
        CHECK(p.getX() == 2.5);
        CHECK(p.getY() == 3.8);
    }
}

TEST_CASE("Point distance function"){
    ariel::Point p(1, 0);
    ariel::Point other(2, 0);
    CHECK(p.distance(other) == 1.0);
}

// character destructor
TEST_CASE("Character destructor"){
    ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
    delete c;
    CHECK(true);
}

// cowboy tests
TEST_CASE("Cowboy constructors"){
    SUBCASE("Default constructor") {
        ariel::Cowboy c;
        CHECK(c.getName() == "NULL");
        CHECK(c.getLocation().getX() == 0.0);
        CHECK(c.getLocation().getY() == 0.0);
        CHECK(c.getHP() == 110);
        CHECK(c.getAmmo() == 6);
    }

    SUBCASE("Parameterized constructor") {
        ariel::Cowboy c("Noy", ariel::Point{0.0,0.0});
        CHECK(c.getName() == "Noy");
        CHECK(c.getLocation().getX() == 0.0);
        CHECK(c.getLocation().getY() == 0.0);
        CHECK(c.getHP() == 110);
        CHECK(c.getAmmo() == 6);
    }
}

TEST_CASE("Cowboy destructor"){
    ariel::Cowboy* c = new ariel::Cowboy("Noy", Point{0, 0});
    delete c;
    CHECK(true);
}

TEST_CASE("Cowboy shoot function"){
    ariel::Cowboy c("Noy", ariel::Point{0.0,0.0});
    ariel::Cowboy* enemy = new ariel::Cowboy("Enemy", Point{0, 0});
    CHECK_NOTHROW(c.shoot(enemy));
    CHECK(c.hasboolets() == true);
    CHECK(c.getAmmo() == 5);
    delete enemy;

}

TEST_CASE("Cowboy reload function"){
    ariel::Cowboy c("Noy", ariel::Point{0.0,0.0});
    ariel::Cowboy* enemy = new ariel::Cowboy("Enemy", Point{0, 0});
    CHECK_NOTHROW(c.shoot(enemy));
    CHECK_NOTHROW(c.relaod());
    CHECK(c.getAmmo() == 6);
    delete enemy;


}

// ninja tests
TEST_CASE("Ninja destructor"){
    ariel::Ninja* n = new ariel::OldNinja("Noy", Point{0, 0});
    delete n;
    CHECK(true);
}

// old ninja tests
TEST_CASE("Old Ninja constructors"){
    SUBCASE("Default constructor") {
        ariel::OldNinja on;
        CHECK(on.getName() == "NULL");
        CHECK(on.getLocation().getX() == 0.0);
        CHECK(on.getLocation().getY() == 0.0);
        CHECK(on.getHP() == 150);
        CHECK(on.getSpeed() == 8);
    }

    SUBCASE("Parameterized constructor") {
        ariel::OldNinja on("Noy", ariel::Point{0.0,0.0});
        CHECK(on.getName() == "Noy");
        CHECK(on.getLocation().getX() == 0.0);
        CHECK(on.getLocation().getY() == 0.0);
        CHECK(on.getHP() == 150);
        CHECK(on.getSpeed() == 8);
    }
}

TEST_CASE("Old Ninja destructor"){
    ariel::OldNinja* on = new ariel::OldNinja("Noy", Point{0, 0});
    delete on;
    CHECK(true);
}

// young ninja tests
TEST_CASE("Young Ninja constructors"){
    SUBCASE("Default constructor") {
        ariel::YoungNinja yn;
        CHECK(yn.getName() == "NULL");
        CHECK(yn.getLocation().getX() == 0.0);
        CHECK(yn.getLocation().getY() == 0.0);
        CHECK(yn.getHP() == 100);
        CHECK(yn.getSpeed() == 14);
    }

    SUBCASE("Parameterized constructor") {
        ariel::YoungNinja yn("Noy", ariel::Point{0.0,0.0});
        CHECK(yn.getName() == "Noy");
        CHECK(yn.getLocation().getX() == 0.0);
        CHECK(yn.getLocation().getY() == 0.0);
        CHECK(yn.getHP() == 100);
        CHECK(yn.getSpeed() == 14);
    }
}

TEST_CASE("Young Ninja destructor"){
    ariel::YoungNinja* yn = new ariel::YoungNinja("Noy", Point{0, 0});
    delete yn;
    CHECK(true);
}

// trained ninja tests
TEST_CASE("Trained Ninja constructors"){
    SUBCASE("Default constructor") {
        ariel::TrainedNinja tn;
        CHECK(tn.getName() == "NULL");
        CHECK(tn.getLocation().getX() == 0.0);
        CHECK(tn.getLocation().getY() == 0.0);
        CHECK(tn.getHP() == 120);
        CHECK(tn.getSpeed() == 12);
    }

    SUBCASE("Parameterized constructor") {
        ariel::TrainedNinja tn("Noy", ariel::Point{0.0,0.0});
        CHECK(tn.getName() == "Noy");
        CHECK(tn.getLocation().getX() == 0.0);
        CHECK(tn.getLocation().getY() == 0.0);
        CHECK(tn.getHP() == 120);
        CHECK(tn.getSpeed() == 12);
    }
}

TEST_CASE("Trained Ninja destructor"){
    ariel::TrainedNinja* tn = new ariel::TrainedNinja("Noy", Point{0, 0});
    delete tn;
    CHECK(true);
}

// team tests
TEST_CASE("Team constructors"){
    SUBCASE("Default constructor") {
        ariel::Team t;
        CHECK(t.getLeader() == nullptr);
    }

    SUBCASE("Parameterized constructor") {
        ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
        ariel::Team t(c);
        CHECK(t.getLeader() == c);

    }
}

TEST_CASE("Team destructor"){
    ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
    ariel::Team* t = new ariel::Team(c);
    delete t;
    CHECK(true);
}

// team2 tests
TEST_CASE("Team2 constructors"){
    SUBCASE("Default constructor") {
        ariel::Team2 t;
        CHECK(t.getLeader() == nullptr);
    }

    SUBCASE("Parameterized constructor") {
        ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
        ariel::Team2 t(c);
        CHECK(t.getLeader() == c);

    }
}

TEST_CASE("Team2 destructor"){
    ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
    ariel::Team2* t = new ariel::Team2(c);
    delete t;
    CHECK(true);
}

// smart team tests
TEST_CASE("SmartTeam constructors"){
    SUBCASE("Default constructor") {
        ariel::SmartTeam t;
        CHECK(t.getLeader() == nullptr);
    }

    SUBCASE("Parameterized constructor") {
        ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
        ariel::SmartTeam t(c);
        CHECK(t.getLeader() == c);

    }
}

TEST_CASE("SmartTeam destructor"){
    ariel::Character* c = new ariel::OldNinja("Noy", Point{0, 0});
    ariel::SmartTeam* t = new ariel::SmartTeam(c);
    delete t;
    CHECK(true);

}