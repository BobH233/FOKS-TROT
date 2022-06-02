#include <fltKernel.h>

#define MAX_SECURE_EXTENSION_COUNT  256

WCHAR secure_extension[MAX_SECURE_EXTENSION_COUNT][32];
size_t secure_extension_count = 0;

// �ڱȽ�ʱ�����õ��Ǵ�Сд�޹صıȽϷ�ʽ
// �����������Ҫ����͸�����ܵ��ļ�����չ��
PWCHAR allowed_extension[MAX_SECURE_EXTENSION_COUNT] = {
		L"docx",
		L"doc",
		L"xlsx",
		L"xls",
		L"pptx",
		L"ppt",
		L"txt",
		/*L"PNG",
		L"JPG",*/
		L"mp4",
		L"dwg",
		NULL };

// ���ҽ����ļ�λ�������ļ�����ʱ�Ż����͸������
const PWCHAR allowed_path[] = {
	L"C:\\Users\\wangzhankun\\Desktop\\testdata",
	L"C:\\Desktop",
	NULL };

const PWCHAR secure_process[] = {
	//ϵͳ����
	// PocUser.exe��������Ȩ���̣�explorer.exe����.doc�ļ��Ǳ����
	L"C:\\Windows\\explorer.exe",

	//�û�����
	L"C:\\Desktop\\PocUser.exe",
	L"C:\\Windows\\System32\\notepad.exe",
	L"C:\\Desktop\\npp.7.8.1.bin\\notepad++.exe",
	L"C:\\Users\\hkx3upper\\AppData\\Local\\Kingsoft\\WPS Office\\11.1.0.11365\\office6\\wps.exe",
	L"C:\\Users\\hkx3upper\\AppData\\Local\\Kingsoft\\WPS Office\\11.1.0.11365\\office6\\wpp.exe",
	L"C:\\Users\\hkx3upper\\AppData\\Local\\Kingsoft\\WPS Office\\11.1.0.11365\\office6\\et.exe",

	L"C:\\Program Files\\Microsoft VS Code\\Code.exe",
	L"C:\\Program Files\\Autodesk\\AutoCAD 2020\\acad.exe",
	L"C:\\WINDOWS\\system32\\certutil.exe",
	L"C:\\Program Files\\VideoLAN\\VLC\\vlc.exe",
	NULL };
