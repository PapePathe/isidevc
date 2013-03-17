#ifndef FAKER_H_INCLUDED

#define FAKER_H_INCLUDED

# define TAILLE_MAX_NOM  25

// noms sénégalais --------------------------------------------------------------------------------------
    /**
     * Un tableau de chaines contenant des noms de famille du sénégal
     */
    static const char *noms[240] = {

        "Niass", "Niasse", "Pouye Seck", "Sock", "Taye", "Thiam", "Thiongane", "Wade", "Badji", "Badiatte", "Biagui", "Bassene", "Bodian", "Coly", "Diamacoune", "Diatta","Diadhiou", "Diedhiou", "Deme", "Dieme", "Djiba", "Coly", "Ehemba", "Goudiaby",
        "Himbane", "Mane", "Manga", "Sagna", "Sambou", "Sane", "Sonko", "Tamba", "Tendeng", "Badji", "Gomis", "Vieira", "Carvalho", "Mendy", "Preira", "Correa", "Basse", "Sylva", "Fernandez", "Da Costa", "Bakhoum", "Diop", "Diagne", "Gaye", "Gueye", "Ndoye", "Ndiour", "Samb", "Baloucoune", "Bandiacky", "Boissy", "Diompy",
        "Dupa", "Kabely", "Kaly", "Kantoussan", "Kassoka", "Kayounga", "Keny", "Malack", "Malèle", "Malomar", "Malou", "Mandika", "Mandiouban", "Mancabou", "Mantanne", "Mbampassy", "Médou", "Minkette", "Nabaline", "Nadiack", "Napel", "Ndecky", "Ndeye", "Niouky", "Ntab", "Nzale", "Panduppy", "Samy", "Boubane", "Bonang", "Bianquinch", "Bindian",
        "Bendian", "Bangonine", "Bapinye", "Bidiar", "Bangar", "Sadio", "Vieira", "Lopez", "Marques", "Preira", "Ndiaye", "Diouf", "Ndong", "Dioh", "Senghor", "Faye", "Dior", "Dione", "Seye", "Diongue", "Sene", "Dieye", "Sarr", "Seck", "Diaher", "Bop", "Kitane", "Kital", "Acc", "Aïdara", "Athie", "Aw", "Ba", "Baby", "Balde", "Barro", "Barry", "Bathily",
        "Bousso", "Camara", "Cisse", "Dia", "Diamanka", "Diallo", "Diao", "Diaw", "Fassa", "Fofana", "Gadio", "Galadio", "Ka", "Kane", "Maal", "Mbow", "Lo", "Ly", "Sall", "Seydi", "Sow", "Sy", "Sylla", "Tall", "Thiam", "Wane", "Wone", "Yock", "Amar", "Babou", "Diagne", "Diakhoumpa", "Goumbala", "Saady", "Sabara", "Sougou", "Sougoufara", "Tandini", "Tandine", "Toure", "Diakite", "Diakho",
        "Diandy", "Aidara", "Bathily", "Camara", "Cisse", "Cissoko", "Coulibaly", "Diawara", "Djimera", "Dabo", "Doumbia", "Doumbia", "Diabang", "Diakhate", "Diabira", "Dansokho", "Diarra", "Drame",
        "Doucoure", "Fadiga", "Fofana", "Gakou", "Gakou", "Gandega", "Kante", "Kanoute", "Keita", "Koita", "Konate", "Sadio", "Sakho", "Sakho", "Samassa", "Sawane", "Sidibe", "Sissoko", "Soumare", "Tandjigora",
        "Timera", "Traore", "Toure", "Wague", "Yatera", "Boye", "Demba", "Diack", "Diarra", "Dieng", "Diop", "Fall", "Gningue", "Hanne", "Kane", "Kasse", "Leye", "Loum", "Marone", "Mbathie", "mbaye", "mbengue",
        "mbodj", "mboup", "mbow", "ndao", "nder", "ndiaye", "ndour", "niane", "niang"

    };
// fin noms sénégalais ----------------------------------------------------------------------------------



// prenoms de femmes ------------------------------------------------------------------------------------
    /**
     * Un tableau de chaines contenant des prénoms de femmes du sénégal
     */
    static const char *noms_femmes[226] = { "Abibatou", "Aby", "Absa", "Adama", "Adiouma", "Adji", "Adja", "Aïcha", "Aïda", "Aïssatou",
        "Akinumelob", "Alima", "Alimatou", "Alinesiitowe", "Aloendisso", "Altine", "Ama", "Aminata", "Aminta", "Amy", "Amina", "Anta",
        "Arame", "Assa", "Assietou", "Astou", "Ata", "Atia", "Awa", "Awentorébé", "Ayimpen", "Banel", "Batouly", "Bigué", "Billé",
        "Binta", "Bineta", "Binette", "Binta", "Bintou", "Borika", "Bougouma", "Boury", "Bousso", "Ciramadi", "Codou", "Combé",
         "Coudouution", "Coumba", "Coumboye", "Coura", "Daba", "Dado", "Daka", "Debbo", "Défa", "Dewel", "Dewene", "Diakher", "Diakhou",
         "Dialikatou", "Dianké", "Diariatou", "Diarra", "Diary", "Dibor", "Dieourou", "Dior", "Diouma", "Djaly", "Djébou", "Djeynaba",
         "Dkikel", "Djilane", "Enfadima", "Fabala", "Fabinta", "Fadima", "Fakane", "Fama", "Fanta", "Farmata", "Fatima", "Fatou", "Fatoumatou",
         "Fily", "Garmi", "Gnagna", "Gnilane", "Gnima", "Gouya", "Guignane", "Guissaly", "Haby", "Hawa", "Heinda", "Holèl", "Issate",
         "Kankou", "Karimatou", "Kenbougoul", "Kéwé", "Kadiali", "Khadija", "Khadijatou", "Khady", "Khar", "Khary", "Khayfatte", "Khoudia",
         "Khoudjedji", "Khoumbaré", "Kiné", "Korka", "Laf", "Lama", "Léna", "Lika", "Lissah", "Liwane", "Mada", "Madior", "Madjiguène",
         "Maguette", "Mahawa", "Mame", "Mamina", "Manthita", "Marème", "Mariama", "Mamassa", "Mane", "Maty", "Mayatta", "Maymouna", "Mbarou",
         "Mbayeng", "Mbissine", "Mbossé", "Mingue", "Mintou", "Mouskéba", "Nafi", "Nbieumbet", "Ndella", "Ndeye", "Ndiarenioul", "Ndiasse",
         "Ndiaty", "Ndiémé", "Ndioba", "Ndiolé", "Ndioro", "Ndombo", "Néné", "Neyba", "Ngoné", "Ngosse", "Nguenar", "Nguissaly",
         "Niakuhufosso", "Niali", "Nialine", "Ningou", "Nini", "Niouma", "Oulèye", "Ouly", "Oulimata", "Oumou", "Oumy", "Oureye", "Penda",
         "Raby", "Raki", "Rama", "Ramatoulaye", "Ramata", "Rokhaya", "Roubba", "Roughy", "Sadio", "Safiétou", "Safi", "Sagar", "Sahaba",
         "Salimata", "Salamata", "Sanakha", "Sarratou", "Saoudatou", "Sawdiatou", "Selbé", "Sell", "Seynabou", "Seyni", "Sibett", "Siga",
         "Sira", "Sirabiry", "Soda", "Sofiatou", "Sofietou", "Sokhna", "Souadou", "Soukeye", "Soukeyna", "Tabara", "Tacko", "Taki", "Tening",
         "Téwa", "Tiné", "Thiomba", "Thiony", "Thioro", "Thioumbane", "Tocka", "Tokoselle", "Toly", "Walty", "Yadicone", "Yacine", "Yandé",
         "Yaye"
    };
// prenoms de femmes ------------------------------------------------------------------------------------


// prenoms d'hommes ------------------------------------------------------------------------------------
    /**
     * Un tableau de chaines contenant des prénoms d'hommes du sénégal
     */
    static const char *noms_hommes[305] = { "Abba", "Abdallah", "Abdou", "Abdoulatif", "Abdoulaye", "Abdourahmane", "Ablaye", "Abou", "Adama",
        "Agouloubene", "Aïnina", "Aladji", "Alassane", "Albouri", "Alfa", "Alfousseyni", "Aliou", "Alioune", "Allé", "Almamy", "Amadou",
        "Amara", "Amath", "Amidou", "Ansoumane", "Anta", "Arfang", "Arona", "Assane", "Ass", "Aziz", "Baaba", "Babacar", "Babou", "Badara",
        "Badou", "Bacar", "Baïdi", "Baila", "Bakari", "Ballago", "Balla", "Bamba", "Banta", "Bara", "Bassirou", "Bathie", "Bayo", "Becaye",
        "Bilal", "Biram", "Birane", "Birima", "Biry", "Bocar", "Bodiel", "Bolikoro", "Boubacar", "Boubou", "Bougouma", "Bouly", "Bouna",
        "Bourkhane", "Bransan", "Cheikh", "Chérif", "Ciré", "Daly", "Dame", "Daouda", "Daour", "Demba", "Dényanké", "Diakhou", "Dial",
        "Dialamba", "Dialegueye", "Dianco", "Dicory", "Diégane", "Diène", "Dierry", "Diokel", "Diokine", "Diomaye", "Djibo", "Djibril",
        "Djiby", "Doudou", "Dramane", "ElHadj", "Elimane", "Facourou", "Fadel", "Falilou", "Fallou", "Famara", "Farba", "Fatel", "Fodé",
        "Fodey", "Fodié", "Foulah", "Galaye", "Gaoussou", "Gora", "Gorgui", "Goumbo", "Goundo", "Guidado", "Habib", "Hadiya", "Hady",
        "Hamidou", "Hammel", "Hatab", "Iba", "Ibrahima", "Ibou", "Idrissa", "Insa", "Ismaïl", "Ismaïla", "Issa", "Isshaga", "Jankebay",
        "Jamuyon", "Kader", "Kainack", "Kalidou", "Kalilou", "Kambia", "Kao", "Kaourou", "Karamo", "Kéba", "Khadim", "Khadir", "Khalifa",
        "Khamby", "Khary", "Khoudia", "Khoule", "Kor", "Koutoubo", "Lamine", "Lamp", "Landing", "Lat", "Latif", "Latsouck", "Latyr", "Lémou",
        "Léou", "Leyti", "Libasse", "Limane", "Loumboul", "Maba", "Macky", "Macodou", "Madia", "Madické", "Mady", "Mactar", "Maffal",
        "Maguette", "Mahécor", "Makan", "Malal", "Malamine", "Malang", "Malaw", "Malick", "Mallé", "Mamadou", "Mamour", "Mansour", "Maodo",
        "Mapaté", "Mar", "Massamba", "Massar", "Masseck", "Mbagnick", "Mbakhane", "Mbamoussa", "Mbar", "Mbaye", "Mébok", "Médoune", "Meïssa",
        "Modou", "Moktar", "Momar", "Mor", "Mountaga", "Moussa", "Moustapha", "Namori", "Ndane", "Ndiack", "Ndiaga", "Ndiankou", "Ndiaw",
        "Ndiawar", "Ndiaya", "Ndiogou", "Ndiouga", "Ndongo", "Ngagne", "Ngor", "Nguénar", "Niakar", "Niankou", "Niokhor", "Nouh", "Nouha",
        "Npaly", "Ogo", "Omar", "Opa", "Oumar", "Oury", "Ousmane", "Ousseynou", "Papa", "Pape", "Papis", "Pathé", "Racine", "Sadibou",
        "Sacoura", "Saër", "Sahaba", "Saïdou", "Sakhir", "Salam", "Salif", "Saliou", "Saloum", "Samba", "Samori", "Samsidine", "Sandigui",
        "Sankoun", "Sanokho", "Sécouba", "Sédar", "Sékou", "Semou", "Senghane", "Serigne", "Seyba", "Seydina", "Seydou", "Sibiloumbaye",
        "Sidate", "Sidy", "Siéka", "Sihalébé", "Sihounke", "Silly", "Socé", "Sogui", "Soireba", "Solal", "Sonar", "Souleymane", "Soundjata",
        "Sounkarou", "Souty", "Tafsir", "Talla", "Tamsir", "Tanor", "Tayfor", "Tekheye", "Tété", "Thiawlo", "Thierno", "Thione", "Tijane",
        "Tidjane", "Toumani", "Vieux", "Wagane", "Waly", "Wandifing", "Wasis", "Woula", "Woury", "Yacouba", "Yafaye", "Yakou", "Yankhoba",
        "Yerim", "Yero", "Yoro", "Yougo", "Younouss", "Youssou", "Yussu", "Youssoufa"
    };
// prenoms d'hommes ------------------------------------------------------------------------------------

/**
 * A function that generates senegalese family name
 *
 */
void fkr_nom_famille (char *destination);

/**
 * A function that generates senegalese male's firstname
 *
 */
void fkr_prenom_homme (char *destination);

/**
 * A function that generates senegalese female's firstname
 *
 * @return void
 *
 * @param destination
 */
void fkr_prenom_femme (char *destination);


#endif // FAKER_H_INCLUDED
