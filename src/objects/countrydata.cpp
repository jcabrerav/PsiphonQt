#include "countrydata.h"

CountryData::CountryData(QObject *parent) : QObject(parent)
{
    fill();
}

QString CountryData::iso2name(QString iso){
    CountryData data;
    QString line = data.iso2line(iso);
    if (!line.isEmpty()) {
        return line.section(' ', 1, -2);
    }
    return "";
}

QString CountryData::iso2code(QString iso){
    CountryData data;
    QString line = data.iso2line(iso);
    if (!line.isEmpty()) {
        return line.section(' ', 0, 0);
    }
    return "";
}

QString CountryData::iso2flag(QString iso) {
    return ":/flags/flag_"+iso.toLower();
}

QString CountryData::iso2line(QString iso){
    for(QString line: country_codes){
        if(line.contains(" "+iso.toUpper()))
            return line;
    }
    return "";
}


void CountryData::fill(){
    country_codes
        <<"93 Afganistán AF"
        <<"355 Albania AL"
        <<"49 Alemania DE"
        <<"376 Andorra AD"
        <<"244 Angola AO"
        <<"1264 Anguila AI"
        <<"672 Antártida AQ"
        <<"1268 Antigua y Barbuda AG"
        <<"599 Antillas Holandesas AN"
        <<"966 Arabia Saudita SA"
        <<"213 Argelia DZ"
        <<"54 Argentina AR"
        <<"374 Armenia AM"
        <<"297 Aruba AW"
        <<"61 Australia AU"
        <<"43 Austria AT"
        <<"994 Azerbaiyán AZ"
        <<"1242 Bahamas BS"
        <<"973 Bahrein BH"
        <<"880 Bangladesh BD"
        <<"1246 Barbados BB"
        <<"32 Bélgica BE"
        <<"501 Belice BZ"
        <<"229 Benin BJ"
        <<"1441 Bermuda BM"
        <<"375 Bielorrusia BY"
        <<"591 Bolivia BO"
        <<"387 Bosnia y Herzegovina BA"
        <<"267 Botswana BW"
        <<"55 Brasil BR"
        <<"673 Brunei BN"
        <<"359 Bulgaria BG"
        <<"226 Burkina Faso BF"
        <<"257 Burundi BI"
        <<"975 Bután BT"
        <<"238 Cabo Verde CV"
        <<"855 Cambodia KH"
        <<"237 Camerún CM"
        <<"1 Canadá CA"
        <<"235 Chad TD"
        <<"56 Chile CL"
        <<"86 China CN"
        <<"357 Chipre CY"
        <<"57 Colombia CO"
        <<"269 Comoras KM"
        <<"82 Corea del Sur KR"
        <<"850 Corea del Norte KP"
        <<"225 Costa de Marfil CI"
        <<"506 Costa Rica CR"
        <<"385 Croacia HR"
        <<"53 Cuba CU"
        <<"599 Curazao CW"
        <<"45 Dinamarca DK"
        <<"253 Djibouti DJ"
        <<"1767 Dominica DM"
        <<"593 Ecuador EC"
        <<"20 Egipto EG"
        <<"503 El Salvador SV"
        <<"971 Emiratos Árabes Unidos AE"
        <<"291 Eritrea ER"
        <<"421 Eslovaquia SK"
        <<"386 Eslovenia SI"
        <<"34 España ES"
        <<"1 Estados Unidos US"
        <<"372 Estonia EE"
        <<"251 Etiopía ET"
        <<"679 Fiji FJ"
        <<"63 Filipinas PH"
        <<"358 Finlandia FI"
        <<"33 Francia FR"
        <<"241 Gabón GA"
        <<"220 Gambia GM"
        <<"995 Georgia GE"
        <<"233 Ghana GH"
        <<"350 Gibraltar GI"
        <<"1473 Granada GD"
        <<"30 Grecia GR"
        <<"299 Groenlandia GL"
        <<"1671 Guam GU"
        <<"502 Guatemala GT"
        <<"441481 Guernsey GG"
        <<"224 Guinea GN"
        <<"240 Guinea Ecuatorial GQ"
        <<"245 Guinea Bissau GW"
        <<"592 Guyana GY"
        <<"509 Haití HT"
        <<"31 Holanda NL"
        <<"504 Honduras HN"
        <<"852 Hong Kong HK"
        <<"36 Hungría HU"
        <<"91 India IN"
        <<"62 Indonesia ID"
        <<"98 Irán IR"
        <<"964 Iraq IQ"
        <<"353 Irlanda IE"
        <<"61 Isla de Navidad CX"
        <<"441624 Isla del hombre IM"
        <<"354 Islandia IS"
        <<"61 Islas Cocos CC"
        <<"298 Islas Faroe FO"
        <<"500 Islas Malvinas FK"
        <<"677 Islas Salomón SB"
        <<"682 Islas Cook CK"
        <<"692 Islas Marshall MH"
        <<"1284 Islas Vírgenes Británicas VG"
        <<"1340 Islas Vírgenes de EE.UU VI"
        <<"1345 Islas Caimán KY"
        <<"1649 Islas Turcas y Caicos TC"
        <<"1670 Islas Marianas del Norte MP"
        <<"972 Israel IL"
        <<"39 Italia IT"
        <<"1876 Jamaica JM"
        <<"81 Japón JP"
        <<"441534 Jersey JE"
        <<"962 Jordán JO"
        <<"7 Kazajastán KZ"
        <<"254 Kenia KE"
        <<"996 Kirguistán KG"
        <<"686 Kiribati KI"
        <<"383 Kosovo XK"
        <<"965 Kuwait KW"
        <<"856 Laos LA"
        <<"266 Lesoto LS"
        <<"371 Letonia LV"
        <<"961 Líbano LB"
        <<"231 Liberia LR"
        <<"218 Libia LY"
        <<"423 Liechtenstein LI"
        <<"370 Lituania LT"
        <<"352 Luxemburgo LU"
        <<"853 Macau MO"
        <<"389 Macedonia MK"
        <<"261 Madagascar MG"
        <<"60 Malasia MY"
        <<"265 Malawi MW"
        <<"960 Maldivas MV"
        <<"223 Mali ML"
        <<"356 Malta MT"
        <<"212 Marruecos MA"
        <<"230 Mauricio MU"
        <<"222 Mauritania MR"
        <<"262 Mayotte YT"
        <<"52 México MX"
        <<"691 Micronesia FM"
        <<"373 Moldavia MD"
        <<"377 Mónaco MC"
        <<"976 Mongolia MN"
        <<"382 Montenegro ME"
        <<"1664 Montserrat MS"
        <<"258 Mozambique MZ"
        <<"95 Myanmar MM"
        <<"264 Namibia NA"
        <<"674 Nauru NR"
        <<"977 Nepal NP"
        <<"505 Nicaragua NI"
        <<"227 Niger NE"
        <<"234 Nigeria NG"
        <<"683 Niue NU"
        <<"47 Noruega NO"
        <<"64 Nueva Zelanda NZ"
        <<"687 Nueva Caledonia NC"
        <<"968 Omán OM"
        <<"92 Pakistán PK"
        <<"680 Palau PW"
        <<"970 Palestina PS"
        <<"507 Panamá PA"
        <<"675 Papúa Nueva Guinea PG"
        <<"595 Paraguay PY"
        <<"51 Perú PE"
        <<"64 Pitcairn PN"
        <<"689 Polinesia francés PF"
        <<"48 Polonia PL"
        <<"351 Portugal PT"
        <<"1939 Puerto Rico PR"
        <<"1787 Puerto Rico PR"
        <<"974 Qatar QA"
        <<"44 Reino Unido GB"
        <<"236 República Centroafricana CF"
        <<"242 República del congo CG"
        <<"243 República Democrática del Congo CD"
        <<"420 República checa CZ"
        <<"1849 República Dominicana DO"
        <<"1829 República Dominicana DO"
        <<"1809 República Dominicana DO"
        <<"262 Reunión RE"
        <<"250 Ruanda RW"
        <<"40 Rumanía RO"
        <<"7 Rusia RU"
        <<"212 Sahara Occidental EH"
        <<"685 Samoa WS"
        <<"1684 Samoa Americana AS"
        <<"378 San Marino SM"
        <<"508 San Pedro y Miquelón PM"
        <<"590 San Bartolomé BL"
        <<"590 San Martín MF"
        <<"1784 San Vicente y las Granadinas VC"
        <<"1869 San Cristóbal y Nieves KN"
        <<"290 Santa Elena SH"
        <<"1758 Santa Lucía LC"
        <<"239 Santo Tomé y Príncipe ST"
        <<"221 Senegal SN"
        <<"381 Serbia RS"
        <<"248 Seychelles SC"
        <<"232 Sierra Leona SL"
        <<"65 Singapur SG"
        <<"1721 Sint Maarten SX"
        <<"963 Siria SY"
        <<"252 Somalia SO"
        <<"94 Sri Lanka LK"
        <<"27 Sudáfrica ZA"
        <<"211 Sudán del Sur SS"
        <<"249 Sudán SD"
        <<"46 Suecia SE"
        <<"41 Suiza CH"
        <<"597 Surinam SR"
        <<"47 Svalbard y Jan Mayen SJ"
        <<"268 Swazilandia SZ"
        <<"66 Tailandia TH"
        <<"886 Taiwán TW"
        <<"255 Tanzania TZ"
        <<"992 Tayikistán TJ"
        <<"246 Territorio Británico del Océano Índico IO"
        <<"670 Timor Oriental TL"
        <<"228 Togo TG"
        <<"690 Tokelau TK"
        <<"676 Tonga TO"
        <<"1868 Trinidad y Tobago TT"
        <<"216 Túnez TN"
        <<"90 Turkía TR"
        <<"993 Turkmenistán TM"
        <<"688 Tuvalu TV"
        <<"380 Ucrania UA"
        <<"256 Uganda UG"
        <<"598 Uruguay UY"
        <<"998 Uzbekistán UZ"
        <<"678 Vanuatu VU"
        <<"379 Vaticano VA"
        <<"58 Venezuela VE"
        <<"84 Vietnam VN"
        <<"681 Wallis y Futuna WF"
        <<"967 Yemen YE"
        <<"260 Zambia ZM"
        <<"263 Zimbabue ZW";
}
