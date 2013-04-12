/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUIEditor_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUIEditor.GenericBrowserType_GFxMovie
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_GFxMovie : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1825 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GFxMovie::pClassPointer = NULL;

// Class GFxUIEditor.GFxImportCommandlet
// 0x0000 (0x007C - 0x007C)
class UGFxImportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1826 ];

		return pClassPointer;
	};

};

UClass* UGFxImportCommandlet::pClassPointer = NULL;

// Class GFxUIEditor.GFxMovieFactory
// 0x001C (0x008C - 0x0070)
class UGFxMovieFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0070 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1827 ];

		return pClassPointer;
	};

};

UClass* UGFxMovieFactory::pClassPointer = NULL;

// Class GFxUIEditor.GFxReimportCommandlet
// 0x0000 (0x007C - 0x007C)
class UGFxReimportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1828 ];

		return pClassPointer;
	};

};

UClass* UGFxReimportCommandlet::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif