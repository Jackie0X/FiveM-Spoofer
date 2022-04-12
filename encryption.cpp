#include "encryption.h"

char zero = static_cast<char>(48);
char one = static_cast<char>(49);
char two = static_cast<char>(50);
char three = static_cast<char>(51);
char four = static_cast<char>(52);
char five = static_cast<char>(53);
char six = static_cast<char>(54);
char seven = static_cast<char>(55);
char eight = static_cast<char>(56);
char nine = static_cast<char>(57);
char percent = static_cast<char>(37);
char A = static_cast<char>(65);
char B = static_cast<char>(66);
char C = static_cast<char>(67);
char D = static_cast<char>(68);
char E = static_cast<char>(69);
char F = static_cast<char>(70);
char G = static_cast<char>(71);
char H = static_cast<char>(72);
char I = static_cast<char>(73);
char J = static_cast<char>(74);
char K = static_cast<char>(75);
char L = static_cast<char>(76);
char M = static_cast<char>(77);
char N = static_cast<char>(78);
char O = static_cast<char>(79);
char P = static_cast<char>(80);
char Q = static_cast<char>(81);
char R = static_cast<char>(82);
char S = static_cast<char>(83);
char T = static_cast<char>(84);
char U = static_cast<char>(85);
char V = static_cast<char>(86);
char W = static_cast<char>(87);
char X = static_cast<char>(88);
char Y = static_cast<char>(89);
char Z = static_cast<char>(90);
char a = static_cast<char>(97);
char b = static_cast<char>(98);
char c = static_cast<char>(99);
char d = static_cast<char>(100);
char e = static_cast<char>(101);
char f = static_cast<char>(102);
char g = static_cast<char>(103);
char h = static_cast<char>(104);
char i = static_cast<char>(105);
char j = static_cast<char>(106);
char k = static_cast<char>(107);
char l = static_cast<char>(108);
char m = static_cast<char>(109);
char n = static_cast<char>(110);
char o = static_cast<char>(111);
char p = static_cast<char>(112);
char q = static_cast<char>(113);
char r = static_cast<char>(114);
char s = static_cast<char>(115);
char t = static_cast<char>(116);
char u = static_cast<char>(117);
char v = static_cast<char>(118);
char w = static_cast<char>(119);
char x = static_cast<char>(120);
char y = static_cast<char>(121);
char z = static_cast<char>(122);
char space = static_cast<char>(32);
string zerox(1, zero);
string onex(1, one);
string twox(1, two);
string threex(1, three);
string fourx(1, four);
string fivex(1, five);
string sixx(1, six);
string sevenx(1, seven);
string eightx(1, eight);
string ninex(1, nine);
string percentx(1, percent);
string Ax(1, A);
string Bx(1, B);
string Cx(1, C);
string Dx(1, D);
string Ex(1, E);
string Fx(1, F);
string Gx(1, G);
string Hx(1, H);
string Ix(1, I);
string Jx(1, J);
string Kx(1, K);
string Lx(1, L);
string Mx(1, M);
string Nx(1, N);
string Ox(1, O);
string Px(1, P);
string Qx(1, Q);
string Rx(1, R);
string Sx(1, S);
string Tx(1, T);
string Ux(1, U);
string Vx(1, V);
string Wx(1, W);
string Xx(1, X);
string Yx(1, Y);
string Zx(1, Z);
string ax(1, a);
string bx(1, b);
string cx(1, c);
string dx(1, d);
string ex(1, e);
string fx(1, f);
string gx(1, g);
string hx(1, h);
string ix(1, i);
string jx(1, j);
string kx(1, k);
string lx(1, l);
string mx(1, m);
string nx(1, n);
string ox(1, o);
string px(1, p);
string qx(1, q);
string rx(1, r);
string sx(1, s);
string tx(1, t);
string ux(1, u);
string vx(1, v);
string wx(1, w);
string xx(1, x);
string yx(1, y);
string zx(1, z);
string spacex(1, 32);
char slash = static_cast<char>(47);
char backslash = static_cast<char>(92);
string slashx(1, slash);
string backslashx(1, backslash);
char dwukrop = static_cast<char>(58);
char dot = static_cast<char>(46);
char przecinek = static_cast<char>(44);
string dwukropx(1, dwukrop);
string dotx(1, dot);
string przecinekx(1, przecinek);
char cudzyslow = static_cast<char>(34);
char hashtag = static_cast<char>(35);
string cudzyslowx(1, cudzyslow);
string hashtagx(1, hashtag);
char wykrzynik = static_cast<char>(33);
string wykrzynikx(1, wykrzynik);
char zamknietynawias = static_cast<char>(41);
char otwartynawiasdziwny = static_cast<char>(123);
char zamknietynawiasdziwny = static_cast<char>(125);
char znakzapytania = static_cast<char>(63);
char apostrof = static_cast<char>(39);
char otwartynawias = static_cast<char>(40);
char minuss = static_cast<char>(45);
char podloga = static_cast<char>(95);
char andznak = static_cast<char>(38);
string zamknietynawiasx(1, zamknietynawias);
string otwartynawiasdziwnyx(1, otwartynawiasdziwny);
string zamknietynawiasdziwnyx(1, zamknietynawiasdziwny);
string znakzapytaniax(1, znakzapytania);
string apostrofx(1, apostrof);
string minusx(1, minuss);
string otwartynawiasx(1, otwartynawias);
string podlogax(1, podloga);
string andznakx(1, andznak);

std::string Encryption::GetLocalAppdata() {
	return Lx + Ox + Cx + Ax + Lx + Ax + Px + Px + Dx + Ax + Tx + Ax;
}
std::string Encryption::GetAppdata() {
	return Ax + Px + Px + Dx + Ax + Tx + Ax;
}

std::string Encryption::GetDigital() {
	return backslashx + Dx + ix + gx + ix + tx + ax + lx + Ex + nx + tx + ix + tx + lx + ex + mx + ex + nx + tx + sx;
}

std::string Encryption::GetCitizenFX() {
	return backslashx + Cx + ix + tx + ix + zx + ex + nx + Fx + Xx;
}

std::string Encryption::GetDiscordRPC() {
	return backslashx + dx + ix + sx + cx + ox + rx + dx + backslashx + zerox + dotx + zerox + dotx + threex + zerox + sevenx + backslashx + mx + ox + dx + ux + lx + ex + sx + backslashx + dx + ix + sx + cx + ox + rx + dx + podlogax + rx + px + cx;
}

std::string Encryption::GetDiscordCanaryRPC() {
	return backslashx + dx + ix + sx + cx + ox + rx + dx + cx + ax + nx + ax + rx + yx + backslashx + zerox + dotx +zerox + dotx + twox + sevenx + sixx + backslashx + mx + ox + dx + ux + lx + ex + sx + backslashx + dx + ix + sx + cx + ox + rx + dx + podlogax + rx + px + cx;
}

std::string Encryption::GetRemovingFivemAuthFiles() {
	return Rx + ex + mx + ox + vx + ix + nx + gx + spacex + Fx + ix + vx + ex + Mx + spacex + ax + ux + tx + hx + ex + nx + tx + ix + cx + ax + tx + ix + ox + nx + spacex + fx + ix + lx + ex + sx + dotx + dotx + dotx;
}

std::string Encryption::GetFilesOrDirectories() {
	return fx + ix + lx + ex + sx + spacex + ox + rx + spacex + dx + ix + rx + ex + cx + tx + ox + rx + ix + ex + sx;
}

std::string Encryption::GetWarningMessageNoFiles() {
	return Rx + ex + mx + ox + vx + ex + dx + spacex + zerox + spacex + ox + rx + spacex + lx + ex + sx + sx + spacex + fx + ix + lx + ex + sx + przecinekx + spacex + dx + ox + nx + apostrofx+tx+spacex+yx+ox+ux+spacex+tx+hx+ix+nx+kx+spacex+ix+tx+apostrofx + sx + spacex + wx + ex + ix + rx + dx + znakzapytaniax;
}
std::string Encryption::GetBlockingXbox() {
	return Bx + lx + ox + cx + kx + ix + nx + gx + spacex + Xx + bx + ox + xx + spacex + ax + ux + tx + hx + ex + nx + tx + ix + cx + ax + tx + ix + ox + nx + dotx + dotx + dotx;
}
std::string Encryption::GetMachineGuidRegEdit() {
	return Sx + Tx + Ax + Rx + Tx + spacex + slashx + Mx + Ix + Nx + spacex + Rx + Ex + Gx + spacex + Ax + Dx + Dx + spacex + Hx + Kx + Ex + Yx + podlogax + Lx + Ox + Cx + Ax + Lx + podlogax + Mx + Ax + Cx + Hx + Ix + Nx + Ex + backslashx + Sx + Ox + Fx + Tx + Wx + Ax + Rx + Ex + backslashx + Mx + ix + cx + rx + ox + sx + ox + fx + tx + backslashx + Cx + rx + yx + px + tx + ox + gx + rx + ax + px + hx + yx + spacex + slashx + fx + spacex + slashx + vx + spacex + Mx + ax + cx + hx + ix + nx + ex + Gx + ux + ix + dx + spacex + slashx + tx + spacex + Rx + Ex + Gx + podlogax + Sx + Zx + spacex + slashx + dx + space;
}
std::string Encryption::GetProfileGuidRegEdit() {
	return Sx + Tx + Ax + Rx + Tx + spacex + slashx + Mx + Ix + Nx + spacex + Rx + Ex + Gx + spacex + Ax + Dx + Dx + spacex + Hx + Kx + Ex + Yx + podlogax + Lx + Ox + Cx + Ax + Lx + podlogax + Mx + Ax + Cx + Hx + Ix + Nx + Ex + backslashx + Sx + Yx + Sx + Tx + Ex + Mx + backslashx + Cx + ux + rx + rx + ex + nx + tx + Cx + ox + nx + tx + rx + ox + lx + Sx + ex + tx + backslashx + Cx + ox + nx + tx + rx + ox + lx + backslashx + Cx + lx + ax + sx + sx + backslashx + otwartynawiasdziwnyx + fourx + dx + threex + sixx + ex + ninex + sevenx + twox + minusx + ex + threex + twox + x + minusx + onex + onex + cx + ex + minusx + bx + fx + cx + onex + minusx + zerox + eightx + zerox + zerox + twox + bx + ex + onex + zerox + threex + onex + eightx + zamknietynawiasdziwnyx + backslashx + zerox+zerox+zerox+onex;
}
std::string Encryption::GetHosts() {
	return backslashx + Sx + yx + sx + tx + ex + mx + threex + twox + backslashx + dx + rx + ix + vx + ex + rx + sx + backslashx + ex + tx + cx + backslashx + hx + ox + sx + tx + sx;
}
std::string Encryption::GetCredits() {
	return Fx + ux + lx + lx + yx + spacex + wx + rx + ix + tx + tx + ex + nx + spacex + bx + yx + dwukropx + spacex + Fx + rx + ox + sx + hx + ex + rx + ox + wx + sx + kx + ix + hashtagx + zerox + fourx + twox + zerox + spacex + andznakx + spacex + rx + ux + tx + kx + ux + lx + ix + hashtagx + zerox + zerox + zerox + onex;
}
