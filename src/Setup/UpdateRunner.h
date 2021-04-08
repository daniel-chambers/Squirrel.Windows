#pragma once
class CUpdateRunner
{

public:
	static void LogToEventLog(HANDLE eventLog, WORD eventType, LPCWSTR errorMessage);
	static void DisplayErrorMessage(CString& errorMessage, wchar_t* logFile, HANDLE eventLog);
	static HRESULT AreWeUACElevated();
	static HRESULT ShellExecuteFromExplorer(LPWSTR pszFile, LPWSTR pszParameters);
	static bool DirectoryExists(wchar_t* szPath);
	static bool DirectoryIsWritable(wchar_t* szPath);
	static int ExtractUpdaterAndRun(wchar_t* lpCommandLine, bool useFallbackDir, HANDLE eventLog);
};
