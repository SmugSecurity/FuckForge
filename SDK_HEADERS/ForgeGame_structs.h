/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ForgeGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct ForgeGame.DVPawnBase.BlockingChannelsContainer
// 0x0004
struct FBlockingChannelsContainer
{
	unsigned long                                      BlockingChannel : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      BlockingChannel01 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      BlockingChannel02 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      BlockingChannel03 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      BlockingChannel04 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      BlockingChannel05 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      BlockingChannel06 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      BlockingChannel07 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      BlockingChannel08 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      BlockingChannel09 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      BlockingChannel10 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      BlockingChannel11 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      BlockingChannel12 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      BlockingChannel13 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      BlockingChannel14 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      BlockingChannel15 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      BlockingChannel16 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      BlockingChannel17 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      BlockingChannel18 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      BlockingChannel19 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      BlockingChannel20 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
	unsigned long                                      BlockingChannel21 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00200000] ( CPF_Edit )
	unsigned long                                      BlockingChannel22 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00400000] ( CPF_Edit )
	unsigned long                                      BlockingChannel23 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      BlockingChannel24 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel25 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x02000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel26 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x04000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel27 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x08000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel28 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x10000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel29 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x20000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel30 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x40000000] ( CPF_Edit )
	unsigned long                                      BlockingChannel31 : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x80000000] ( CPF_Edit )
};

// ScriptStruct ForgeGame.DVBuffCalculator.SStatChange
// 0x0018
struct FSStatChange
{
	unsigned char                                      StatName;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Modification;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ModificationType;                                 		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Expiry;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      StaysOnDeath : 1;                                 		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ADVAbility*                                  Ability;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVBuffCalculator.ProtectionFromAbility
// 0x0008
struct FProtectionFromAbility
{
	class ADVAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVPhysicalMaterialProperties.SGenericInteraction
// 0x0050
struct FSGenericInteraction
{
	unsigned char                                      InteractionRotation;                              		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    StaticRotation;                                   		// 0x0004 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      InteractionSockets;                               		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FName >                             OverrideSockets;                                  		// 0x0014 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class USoundCue*                                   SoundCue;                                         		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      AlwaysReplicateSound : 1;                         		// 0x0024 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0028 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UMaterialInterface*                          DecalMaterial;                                    		// 0x002C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DecalMinimumSize;                                 		// 0x0030 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DecalMaximumSize;                                 		// 0x0038 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      DecalsAreAlwaysSquare : 1;                        		// 0x0040 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              DecalLifeSpan;                                    		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       DecalDissolveParameterName;                       		// 0x0048 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct ForgeGame.DVPhysicalMaterialProperties.SGenericOverrideInteraction
// 0x0010
struct FSGenericOverrideInteraction
{
	unsigned char                                      SurfaceType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSGenericInteraction >              Interactions;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct ForgeGame.DVPawn.SAttachment
// 0x0010
struct ADVPawn_FSAttachment
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ADVAttachment*                               AttachmentArchetype;                              		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ADVAttachment*                               Attachment;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVPawn.SHealRecord
// 0x0008
struct FSHealRecord
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVPawn.SHitReaction
// 0x0010
struct FSHitReaction
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     HitReactionImpulse;                               		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVPawn.SSyncResource
// 0x0002
struct FSSyncResource
{
	unsigned char                                      ResourcePercentage;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Dirty;                                            		// 0x0001 (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAttack.SDamage
// 0x0008
struct FSDamage
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVPlayerController.SAssistingPlayer
// 0x000C
struct FSAssistingPlayer
{
	class ADVPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AssistingSince;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      Friendly : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ForgeGame.DVPlayerController.SClassCustomization
// 0x0028
struct FSClassCustomization
{
	int                                                ArmorPhysicalBase;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ArmorPhysicalDifference;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ArmorNatureBase;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ArmorNatureDifference;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ArmorSpiritualBase;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ArmorSpiritualDifference;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ArmorMagicBase;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ArmorMagicDifference;                             		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              SpeedDifference;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                EnergyDifference;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVPawnHero.SSkin
// 0x0018
struct FSSkin
{
	struct FString                                     SkinName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   MainSkin;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   Trim;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   Aux;                                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct ForgeGame.DVAbilityHitscan.SHitPawn
// 0x0005
struct ADVAbilityHitscan_FSHitPawn
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Dirty;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbility.SAttachmentAnimation
// 0x000C
struct FSAttachmentAnimation
{
	struct FName                                       AnimationSeqName;                                 		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct ForgeGame.DVAbilityPuncture.PunctureStack
// 0x0010
struct FPunctureStack
{
	float                                              Expiry;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     Pawn;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   Attack;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilityProjectile.SHitPawn
// 0x0005
struct ADVAbilityProjectile_FSHitPawn
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Dirty;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilityPoisonedArrow.AffectedPawn
// 0x0014
struct FAffectedPawn
{
	float                                              Expiry;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilityTrap.SRepTrapUsed
// 0x000D
struct FSRepTrapUsed
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      Used;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilityCamouflage.SHitPawn
// 0x0005
struct ADVAbilityCamouflage_FSHitPawn
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Dirty;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVWallOfFlame_C.PawnTime
// 0x0008
struct FPawnTime
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ExpiryTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilityBlessedAura.SHitPawn
// 0x0005
struct ADVAbilityBlessedAura_FSHitPawn
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Dirty;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilitySpirtualFervor.FervorStack
// 0x0010
struct FFervorStack
{
	float                                              Expiry;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     Pawn;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   Attack;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVAbilityRavagerAttack.SHitPawn
// 0x0005
struct ADVAbilityRavagerAttack_FSHitPawn
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Dirty;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeDB.SChatTaunt
// 0x0010
struct FSChatTaunt
{
	unsigned char                                      Situation;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UserType;                                         		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TargetType;                                       		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TauntText;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct ForgeGame.ForgeDB.SAbilityFocusChoices
// 0x0008
struct FSAbilityFocusChoices
{
	unsigned char                                      FocusChoice[ 0x8 ];                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVParticleModuleSpawnDecalGameEvent.SDecalData
// 0x002C
struct FSDecalData
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UMaterialInterface*                          DecalMaterial;                                    		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DecalMinimumSize;                                 		// 0x000C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DecalMaximumSize;                                 		// 0x0014 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      DecalsAreAlwaysSquare : 1;                        		// 0x001C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              DecalLifeSpan;                                    		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       DecalDissolveParameterName;                       		// 0x0024 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct ForgeGame.DVPlayerReplicationInfo.SMedalLevelsWon
// 0x0004
struct FSMedalLevelsWon
{
	unsigned long                                      Level1Won : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Level2Won : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Level3Won : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      Level4Won : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct ForgeGame.DVPlayerReplicationInfo.SPendingSteamStats
// 0x0030
struct FSPendingSteamStats
{
	int                                                Kills;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DamageDone;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HealingDone;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ProtectionDone;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DamageTaken;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                KillStreaks;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AssistStreaks;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LongestLife;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                CalculatedSkill;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TimeInCombat;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.DVSkeletalMeshAttachment.SAttachment
// 0x0010
struct ADVSkeletalMeshAttachment_FSAttachment
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ADVAttachment*                               AttachmentArchetype;                              		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ADVAttachment*                               Attachment;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeClassRewardLevels.SXPRewardLevel
// 0x0011
struct FSXPRewardLevel
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     UnlockName;                                       		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      AbilityFocus;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct ForgeGame.ForgeClassRewardLevels.SXPClassRewards
// 0x0018
struct FSXPClassRewards
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSXPRewardLevel >                   Rewards;                                          		// 0x000C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct ForgeGame.ForgeGFxAbilitiesMenu.SAbilityDetailsLine
// 0x0014
struct FSAbilityDetailsLine
{
	class UGFxObject*                                  TheAbilityMC;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityBindTF;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconMC;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityNameTF;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityDescriptionTF;                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxChat.SChatItem
// 0x0028
struct FSChatItem
{
	class UGFxObject*                                  ChatItemMC;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TheMessage;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsGlobal : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsSelf : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TimeSeen;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxClassSelect.SClassSelectionButton
// 0x0020
struct UForgeGFxClassSelect_FSClassSelectionButton
{
	struct FString                                     ForClassName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              TheButton;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                PortraitSI;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                XPosition;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ClassLevel;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumTeammates;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxEscapeMenu.SAbilityBindLine
// 0x0018
struct FSAbilityBindLine
{
	class UGFxClikWidget*                              TheAbilityCB;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PressKeyMC;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconMC;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityNameTF;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityDescriptionTF;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsBeingBound : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SClassSelectionButton
// 0x0028
struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton
{
	struct FString                                     ForClassName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              TheButton;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                PortraitSI;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                XPosition;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ClassLevel;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumTeammates;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                XPSpent;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RequiredXPForNextLevel;                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SClassSkinsAvailable
// 0x000C
struct FSClassSkinsAvailable
{
	TArray< unsigned char >                            AvailableSkins;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SEquipmentSlot
// 0x0010
struct FSEquipmentSlot
{
	class UGFxObject*                                  EquipmentSlotMC;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              EquipmentChangeCB;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentSlotNameTF;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentCurrentNameTF;                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SArmorPointsLine
// 0x003C
struct FSArmorPointsLine
{
	class UGFxObject*                                  SpentTF;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SpentTextCache;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  TypeNameTF;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MinusCB;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlusCB;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TotalTF;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     TotalTextCache;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  DifferenceTF;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     DifferenceTextCache;                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SClassArmorDetails
// 0x0010
struct FSClassArmorDetails
{
	int                                                Base;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TotalAdded;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ArmorPointsSpent;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ASPPointsSpent;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SClassStatPoints
// 0x0058
struct FSClassStatPoints
{
	int                                                ASPPointsAvailable;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ArmorPointsAvailable;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FSClassArmorDetails                         ClassArmorDetails[ 0x4 ];                         		// 0x0008 (0x0040) [0x0000000000000000]              
	float                                              SpeedDifference;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                SpeedPointsSpent;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                EnergyDifference;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                EnergyPointsSpent;                                		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndAccountMenu.SAbilityFocusLine
// 0x006C
struct FSAbilityFocusLine
{
	class UGFxObject*                                  AbilityFocusContainerMC;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconMC;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityNameTF;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityDescriptionTF;                             		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FocusCB[ 0x4 ];                                   		// 0x0010 (0x0010) [0x0000000000000000]              
	class UGFxObject*                                  AbilityCurrentFocusNameTF;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityCurrentFocusLevelTF;                       		// 0x0024 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityCurrentFocusDescriptionTF;                 		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     AbilityDescription[ 0x4 ];                        		// 0x002C (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AbilityLevelRequired[ 0x4 ];                      		// 0x005C (0x0010) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndGroupMenu.SGroupChatItem
// 0x002C
struct FSGroupChatItem
{
	class UGFxObject*                                  GroupChatItemMC;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TheMessage;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsSelf : 1;                                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeSeen;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndGroupMenu.SGroupGameMode
// 0x0010
struct FSGroupGameMode
{
	struct FString                                     QueueName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Enabled : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndGroupMenu.SPlayerAvatar
// 0x000C
struct FSPlayerAvatar
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  TheAvatar;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndGroupMenu.SGroupMemberLine
// 0x0028
struct FSGroupMemberLine
{
	class UGFxObject*                                  ContainerMC;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PendingMC;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ReadyMC;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LeaderMC;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayerNameCB;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BackgroundMC;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerAvatarLoaderMC;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      InUse : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueNetId                                SteamId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndSettings.SBindDetails
// 0x0040
struct FSBindDetails
{
	struct FString                                     BindName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BindNameSubstitution;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       PrimaryKeyName;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       SecondaryKeyName;                                 		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       ControllerKeyName;                                		// 0x0034 (0x0008) [0x0000000000000000]              
	unsigned long                                      HasReset : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ForgeGame.ForgeGFxFrontEndSettings.SScrollingListLineDetails
// 0x001C
struct FSScrollingListLineDetails
{
	unsigned char                                      Index;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  ContainerLIR;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ActionTF;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PrimaryCB;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SecondaryCB;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ControllerCB;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ResetCB;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SBlockedAbility
// 0x0008
struct FSBlockedAbility
{
	class ADVAbility*                                  TheBlockedAbility;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeBlocked;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SHUDMessage
// 0x0014
struct FSHUDMessage
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeTriggered;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DisplayPeriod;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SHUDAward
// 0x0010
struct FSHUDAward
{
	unsigned char                                      MedalType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      AchievementType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      AwardLevel;                                       		// 0x0002 (0x0001) [0x0000000000000000]              
	int                                                AwardXP;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AwardRequiredPoints;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeTriggered;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SAttackLocation
// 0x0010
struct FSAttackLocation
{
	float                                              TimeHappened;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     WorldLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SAbilityCooldownOff
// 0x0008
struct FSAbilityCooldownOff
{
	int                                                AbilitySlot;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeTriggered;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SCombatText
// 0x0010
struct FSCombatText
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeShown;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SCombatIcons
// 0x0064
struct FSCombatIcons
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroHeadIcons;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroCastMC;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroBlockingMC;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroNameBackgroundMC;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroNameContainerMC;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroNameHitMC;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroNameMC;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroNameSpecTF;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroNameTF;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroHealthTF;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeroHealthBarMC;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamIndicatorFriendlyMC;                          		// 0x0034 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamIndicatorFriendlyIconMC;                      		// 0x0038 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamIndicatorEnemyMC;                             		// 0x003C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamIndicatorEnemyIconMC;                         		// 0x0040 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StacksIconMC;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StacksTF;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FSCombatText >                      HeroHurts;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADVAbility*                                  CastingAbility;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              CastTimeLeft;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      ShowingBlocking : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ColorblindModeSet : 1;                            		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SWorldMessage
// 0x001C
struct FSWorldMessage
{
	class UGFxObject*                                  MessageMC;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageTF;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UDVSeqAct_DrawText*                          OwningKismetNode;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TimeTriggered;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsHiding : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SVoiceNotification
// 0x0014
struct FSVoiceNotification
{
	class UGFxObject*                                  ContainerMC;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SpeakerMC;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerNameTF;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class ADVPlayerReplicationInfo*                    DVPRI;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastSpokeAt;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SKillMessage
// 0x0014
struct FSKillMessage
{
	unsigned long                                      InUse : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MessagesIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeShown;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeHidden;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillMessageMC;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SResourceArcAbilityIcon
// 0x000C
struct FSResourceArcAbilityIcon
{
	int                                                AbilityIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ResourceCost;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconMC;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxHUD.SAbilityIcon
// 0x0040
struct FSAbilityIcon
{
	int                                                AbilityIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconMC;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                AbilityIconImageMC;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconCooldownBlindMaskMC;                   		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconCooldownFlashMC;                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconCooldownBlockMC;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconCooldownTextTF;                        		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconKeyBindTextTF;                         		// 0x001C (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                AbilityIconNeedResourceSI;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityIconNeedResourceTF;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityLockoutMC;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityStacksMC;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityStacksTF;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityStacksBackgroundMC;                        		// 0x0034 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityActiveMC;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              LastUpdatedKeyBindTime;                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxScoresSlide.SPlayerLineElement
// 0x0040
struct FSPlayerLineElement
{
	class UGFxClikWidget*                              PlayerDetailsCB;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassIconMC;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerHasFlagMC;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTF;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayerMuteCB;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SpeakerIconMC;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalMCs[ 0x8 ];                                  		// 0x0018 (0x0020) [0x0000000000000000]              
	class UGFxObject*                                  BackgroundMC;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	class ADVPlayerReplicationInfo*                    ThePRI;                                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxScoresSlide.STeamElements
// 0x0404
struct FSTeamElements
{
	class UGFxClikWidget*                              TeamNameCB;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSPlayerLineElement                         PlayerLineMCs[ 0x10 ];                            		// 0x0004 (0x0400) [0x0000000000000000]              
};

// ScriptStruct ForgeGame.ForgeGFxScoreBoard.SMedalDetails
// 0x0010
struct FSMedalDetails
{
	class UGFxObject*                                  MedalMC;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                MedalIconMC;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalTitleTF;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalXPTF;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif