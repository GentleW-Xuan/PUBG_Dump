#pragma once
#include <cstdint>
#include "common/Data.h"
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

namespace Offset
{
	constexpr uint64_t offset_SpoolBack = 0xe583728;
	constexpr uint64_t XenuineDecrypt  = 0xE53D428;//Shieldָ��
	constexpr uint64_t UWorld = 0x1003AAD8;//UWorld ��������ƫ����
	constexpr uint64_t GNames = 0x102963B8;//GNames ���ֱ��ƫ����
	constexpr uint64_t GNameAdd = 0x10;
	constexpr uint64_t ChunkSize = 0x41C8;//ChunkSize IDD   ���С
	constexpr uint64_t PlayerController = 0x30;//PlayerController ��ҿ�����  uint64_t PlayerController = Slot;
	constexpr uint64_t LocalPlayer = 0xB8;//LocalPlayer �������
	constexpr uint64_t GameInstance = 0x160;//GameInstance ��Ϸʵ��
	constexpr uint64_t GameState = 0x110;//GameState  ��Ϸ״̬
	constexpr uint64_t CurrentLevel = 0x150;//Level ��ǰ�ؿ�    *e914c92dc0;��  *3ff9ea950a;��*6c58a4732f;��  *b81afd782e;*01cc3ac894;*4d7f721adf;*000484780f;*129a875714;*d53caa6321;*8f939bc501; *8e0a632a41; 
	constexpr uint64_t Actor = 0x170;//Actor ��ɫ�б�
	constexpr uint64_t ActorsForGC = 0x170;//Actor 
	constexpr uint64_t AcknowledgedPawn = 0x4A8;//AcknowledgedPawn ��ȷ�ϵĽ�ɫ  //Class Engine.PlayerController �е�*f846c93e8c;
	constexpr uint64_t PlayerCameraManager = 0x4D0;//PlayerCameraManager ������������     SDK�д���Engine_classes.h

	//��������
	constexpr uint64_t ObjID = 0x14;// ����ID
	constexpr uint64_t DecryptNameIndexRor = 0x0;//PZ ��ת������������
	constexpr uint64_t DecryptOne = 0x31E19CC5;//DecryptOne
	constexpr uint64_t DecryptTwo = 0xAD249CC5;//DecryptTwo
	constexpr uint64_t TableOne = 0x5;;//TableOne
	constexpr uint64_t TableTwo = 0x10;//TableTwo

	constexpr uint64_t ViewTarget = 0xFE0;//TeamViewTarget �����ж�   ��ǰ��ҰĿ��    SDK��Engine_classes.h
	constexpr uint64_t CameraPos = 0x9F4;//CameraPos
	constexpr uint64_t CameraRot = 0x9E0;//CameraRot
	constexpr uint64_t CameraFov = 0x9D8;//CameraFov

	constexpr uint64_t LastTeamNum = 0x2040;//LastTeamNum �ϴζ����� ������//Class TslGame.TslCharacter�е�  int32_t  *584af6295b;
	constexpr uint64_t TeamNumber = 0x50C;//PlayerTeamId  //Class TslGame.TslPlayerStateBase�µ�*7c972484d0;

	constexpr uint64_t MyHUD = 0x4C8;//MyHUD �û�����HUD    //Class Engine.PlayerController �µ� struct AHUD* *141f8a70b4;
	constexpr uint64_t BlockInputWidgetList = 0x5C0;//���������С�����б�    �µ�*2da2c41658;
	constexpr uint64_t bShowMouseCursor = 0x658;//bShowMouseCursor ��ʾ�����    SDK�д���Engine_classes.h
	constexpr uint64_t ComponentLocation = 0x240;//ComponentLocation ���λ��
	constexpr uint64_t ComponentToWorld = 0x230;//ComponentToWorld ������������
	constexpr uint64_t CharacterState = 0x1110;//CharacterState ��ɫ״̬   ���߻���
	constexpr uint64_t Playname = 0x1100;//CharacterName ��ɫ����   SDK��//Class TslGame.TslCharacter FString �µ�*a98b1ed512;
	constexpr uint64_t ActorRootComp = 0x5D8;//CharacterMovement ��ɫ�ƶ��ٶ�    SDK�д���Engine_classes.h
	constexpr uint64_t WorldToMiniMap = 0x9B4;//WorldToMiniMap ����תС��ͼ
	constexpr uint64_t LayoutData = 0x38;//LayoutData ��������    SDK��UMG_classes.h
	constexpr uint64_t Offsets = 0x0;//Offsets ƫ���� SDK��UMG_struct.h
	constexpr uint64_t Alignment = 0x20;//Alignment ���� SDK��UMG_struct.h
	constexpr uint64_t Visibility = 0xA1;//Visibility �ɼ���
	constexpr uint64_t SelectMinimapSizeIndex = 0x5B0;//SelectMinimapSizeIndex С��ͼ�ߴ�����  //Class TslGame.VehicleDrivingTest�е�OpenedModal
	constexpr uint64_t Slot = 0x30;//Slot ��� SDK��UMG_classes.h
	constexpr uint64_t WidgetStateMap = 0x548;//WidgetStateMap С����״̬ӳ��
	constexpr uint64_t TrainingMapGrid = 0x6c0;//SDK�д���TslGameMode_classes.h ѵ����ͼ����
	
	
	constexpr uint64_t SquadMemberIndex = 0x4E8;// ����С�ӱ�
	constexpr uint64_t SafetyZonePosition = 0x564;//SafetyZonePosition ��ȫ��λ�� SDK�д���TslGame_classes.h
	constexpr uint64_t SafetyZoneRadius = 0x46C;//SafetyZoneRadius ��ȫ���뾶 SDK�д���TslGame_classes.h
	constexpr uint64_t PoisonGasWarningRadius = 0x5CC;//BlueZoneRadius   ��Ȧ�뾶 SDK�д���TslGame_classes.h
	constexpr uint64_t PoisonGasWarningPosition = 0x5B4;//BlueZonePosition ��Ȧλ�� SDK�д���TslGame_classes.h

	//����Ѫ��1

	constexpr uint64_t HeaFlag = 0x210;
	constexpr uint64_t Health1 = 0xA60;
	constexpr uint64_t Health2 = 0xA70;
	constexpr uint64_t Health3 = 0xA54;
	constexpr uint64_t Health4 = 0xA40;
	constexpr uint64_t Health5 = 0xA55;
	constexpr uint64_t Health6 = 0xA50;
	constexpr uint64_t Health_keys0 = 0xCEC7A544;
	constexpr uint64_t Health_keys1 = 0x9B63B250;
	constexpr uint64_t Health_keys2 = 0xCABBA80F;
	constexpr uint64_t Health_keys3 = 0x50384827;
	constexpr uint64_t Health_keys4 = 0xA9911D0A;
	constexpr uint64_t Health_keys5 = 0x23DD6548;
	constexpr uint64_t Health_keys6 = 0x94527C8;
	constexpr uint64_t Health_keys7 = 0xF7CEE21;
	constexpr uint64_t Health_keys8 = 0xB657A58;
	constexpr uint64_t Health_keys9 = 0xFEF5087;
	constexpr uint64_t Health_keys10 = 0xE2754ED8;
	constexpr uint64_t Health_keys11 = 0x698ADBBB;
	constexpr uint64_t Health_keys12 = 0xBDA950D5;
	constexpr uint64_t Health_keys13 = 0x50932707;
	constexpr uint64_t Health_keys14 = 0x45099E38;
	constexpr uint64_t Health_keys15 = 0x14D82A56;
	constexpr uint64_t Health_Die = 0x1860; // GroggyHealth ����״̬Ѫ��  SDK�д���TslGame_classes.h

	constexpr uint64_t PlayerArray = 0x410;//������� SDK�д���Engine_classes.h
	constexpr uint64_t AccountId = 0x538;//�˻�ID SDK�д���TslGame_classes.h
	constexpr uint64_t PlayerName = 0x438;//������� SDK�д���Engine_classes.h
	constexpr uint64_t PlayerStatusType = 0x420;//���״̬����
	constexpr uint64_t PlayerState = 0x438;//���״̬ SDK��Engine_classes.h
	constexpr uint64_t PlayerSatisitc = 0x4D8;//���ͳ��PlayerStatistic    //Class TslGame.TslPlayerStateBase�е�*735348bcaa;  
	constexpr uint64_t DamageDealtOnEnemy = 0x488;//�Ե�����ɵ��˺� SDK�д���TslGame_classes.h
	constexpr uint64_t SpectatedCount = 0x1260;//��ս����   Audience  SDK��//Class TslGame.TslCharacter �� int32_t *d35f285ddb;

	//����ȼ�

	constexpr uint64_t PubgIdData = 0xBC0; ////Class TslGame.TslPlayerStateBase�µ�*e13ab1c336;
	constexpr uint64_t PartnerLevel = 0x6BA; //�����ߵȼ� SDK�д���TslGame_classes.h
	constexpr uint64_t SurvivalTier = PubgIdData + 0x20;  //�����SurvivalLevelʮ������ - 4 == SurvivalTier SDK�д���TslGame_struct.h
	constexpr uint64_t SurvivalLevel = PubgIdData + 0x24; //�����SurvivalLevelʮ������ -24 == PubgIdData SDK�д���TslGame_struct.h

	constexpr uint64_t CharacterClanInfo = 0x890;//��ɫ������Ϣ
	constexpr uint64_t EquippedWeapons = 0x1F8;//װ��������   *f4edfbc71c;��*9872b3949b;��*58594e6960;��*28dc2dd669;��*088a8665bc;��*99be31988b;��*8233547965;��*bfd0ba5fe6;��*12b4b97aa9;��*571cd96e0f; ��*eddc4c17af;��*de80cd0c28;��*fa393ac303; ��*6b76bdc664;��*403855fc64;��
	constexpr uint64_t WeaponProcessor = 0x9A0;//����������  SDK�д���TslGame_classes.h
	constexpr uint64_t CurrentWeaponIndex = 0x301;//��ǰ��������    �µ�//Class OnlineSubsystemUtils.*d6b24982c2*aab47ae436
	constexpr uint64_t WeaponTrajectoryData = 0x10D0;//������������ SDK�д���TslGame_classes.h
	constexpr uint64_t TrajectoryGravityZ = 0xFFC;//��������Z SDK�д���TslGame_classes.h
	constexpr uint64_t FiringAttachPoint = 0x880;//������ŵ�  //Class TslGame.TslWeapon struct FName *e5451bf277; 
	constexpr uint64_t ScopingAttachPoint = 0xCA0;//��׼���ŵ� SDK�д���TslGame_classes.h
	constexpr uint64_t TrajectoryConfig = 0x100;//��������  *e52136456d;��*c7a0d508cc;��*19b4e4b47f;��*6f80b2a3d9;��*4f05fa3bc6;��*d00245c18c; ��*a73c420349; ���о��������
	constexpr uint64_t BallisticCurve = 0x28;//��������  ̫���� 
	constexpr uint64_t FloatCurves = 0x30;//��������  *375c2ab903;*806b1862b9;  *d6c3f91770; *f1e4989c5a;*41934c3f49;*c9432b8b8b;*84f208ecb1;*ab8da07e29;*ae6d4a9f47;*70d64a78c3;*36c9718028;*9380a8a1c5;*3258d9889f;*9c88c4e353;*e758b9da94;*04f97ddeb3;*68538debc6;*2623dc93e7;*d2ff854c15;*cf19e09d4c;*9018b6c8bd;*aa24363a8a;*4a626e9032;*dd1af50eee
	constexpr uint64_t Mesh3P = 0x7D0;//���˳�ģ�� Class TslGame.TslWeapon�е� EncryptedObjectProperty *a74eb10ce4;
	constexpr uint64_t Keys = 0x60;//FRichCurve_Keys = 0x60;//��ֵ SDK�д���Engine_struct.h


	constexpr uint64_t AttachedStaticComponentMap = 0x1340;//���ŵľ�̬���ӳ��    //Class TslGame.*6f65b02505�µ�*01eb88bdb2; 
	constexpr uint64_t ElapsedCookingTime = 0xB9C;//
	constexpr uint64_t PlayerInput = 0x548; //������� SDK�д���Engine_classes.h
	constexpr uint64_t InputAxisProperties = 0x130;//UnkXorKey0 ����������
	constexpr uint64_t Veloctity = 0x3d0;//SDK��LastUpdateVelocity �������ٶ�  *d16f6f655d;    *d9acf687f5; *c63a419d38;
	constexpr uint64_t Mesh = 0x610;//SDK��Mesh ���� SDK�д���Engine_classes.h

	constexpr uint64_t m_rootComponent = 0x260;//m_rootComponent   RootComponent SDK�д���Engine_classes.h
	constexpr uint64_t Bone = 0xAC0;  //BoneArray   StaticMesh ��̬���� SDK�д���Engine_classes.h
	constexpr uint64_t Eyes = 0x74C; //Eyes �۾�
	constexpr uint64_t bAlwaysCreatePhysicsState = 0x480;//bAlwaysCreatePhysicsState ������� SDK�д���Engine_classes.h 

	constexpr uint64_t VehicleMovement = 0x470;//UnkXorKey1 �����ƶ� SDK�д���PhysXVehicles_classes.h
	constexpr uint64_t VehicleRiderComponent = 0x2150;//VehicleRiderComponent ���������� SDK�д���TslGame_classes.h
	constexpr uint64_t ReplicatedMovement = 0x60;//ReplicatedMovement ���Ƶ��ƶ� SDK�д���Engine_classes.h
	constexpr uint64_t LastVehiclePawn = 0x260;//LastVehiclePawn �ϴγ�����ɫ    *8c1474d4dd;��*6c688117e6;�� *73f906f72e;��*8fedb2cedb;��*1b3aa6ccf0;��*3b2d80596f;��*13de2d75e4;��*69fa3eb2eb;��*93e28e2faa;��*6afc8e1543;��*96088726bc;��*5212777759;��*55c50a42ee; ��
	constexpr uint64_t SeatIndex = 0x220;//SeatIndex ��λ���� SDK�з�����TslGame_struct.h

	constexpr uint64_t Wheels = 0x318;//UnkXorKey2 ���� SDK�д���PhysXVehicles_classes.h
	constexpr uint64_t WheelLocation = 0xf8;//����λ�� UnkXorKey6,
	constexpr uint64_t DampingRate = 0x4C;//����   ������  UnkXorKey3, 
	constexpr uint64_t ShapeRadius = 0x40;//UnkXorKey4 ����  ��״�뾶

	constexpr uint64_t DroppedItemGroup = 0x140;//DroppedItemGroup ������Ʒ��
	constexpr uint64_t Packge = 0x590;// ��������ƷPackge  Class TslGame.ItemPackage�е�Items
	constexpr uint64_t DroppedItemGroup_UItem = 0x7D8;//DroppedItemGroup_UItem ������Ʒ������Ʒ  ����Class TslGame.*bdadfa497f �е�Item

	constexpr uint64_t AttachedItems = 0x828;//������Ʒ
	constexpr uint64_t WeaponAttachmentData = 0x138;//������������ TslGame_struct.h�����淴����
	constexpr uint64_t ItemTable = 0xA8;//��Ʒһ
	constexpr uint64_t ItemID = 0x26C;//��Ʒ�� SDK��W_AIWeaponButton_classes.h
	constexpr uint64_t DroppedItem = 0x458;//DroppedItem ������Ʒ SDK�п��ܴ���TslGame_classes.h

	constexpr uint64_t AnimScriptInstance = 0xDD8;//AnimScriptInstance �����ű�ʵ�� SDK�д���Engine_classes.h 
	constexpr uint64_t PreEvalPawnState = 0x6D8;//Ԥ������ɫ״̬  SDK�д���TslGame_classes.h

	constexpr uint64_t bIsScoping_CP = 0xDC6;//�Ƿ�������׼ SDK�д���TslGame_classes.h
	constexpr uint64_t bIsReloading_CP = 0x988;//���� �Ƿ�����װ�� SDK�д���TslGame_classes.h
	constexpr uint64_t RecoilADSRotation_CP = 0xA9C;//��׼ʱ�ĺ�������ת
	constexpr uint64_t ControlRotation_CP = 0x7F4;//������ת SDK�д���TslGame_classes.h
	constexpr uint64_t LeanLeftAlpha_CP = 0xEAC;//������б SDK�д���TslGame_classes.h
	constexpr uint64_t LeanRightAlpha_CP = 0xEB0;//������б SDK�д���TslGame_classes.h
	constexpr uint64_t CurrentAmmoData = 0xAB8;//�ӵ�����   //Class TslGame.TslWeapon_Gun�µ�*446e0e140c;
	
	constexpr uint64_t StaticSockets = 0xc0;//SDK��UStaticMesh_Sockets��̬���    Class Engine.StaticMesh��Sockets
	constexpr uint64_t StaticSocketName = 0x28;//UStaticMeshSocket_SocketName ��̬�������               Class Engine.*2b2a7f71e1
	constexpr uint64_t StaticRelativeLocation = 0x30;//UStaticMeshSocket_RelativeLocation ��̬���λ��   Class Engine.*2b2a7f71e1
	constexpr uint64_t StaticRelativeRotation = 0x3c; //UStaticMeshSocket_RelativeRotation ��̬�����ת  Class Engine.*2b2a7f71e1
	constexpr uint64_t StaticRelativeScale = 0x48;//UStaticMeshSocket_RelativeScale ��̬�������         Class Engine.*2b2a7f71e1

	constexpr uint64_t InputYawScale = 0x64c;//����ƫ������ SDK�д���Engine_classes.h

	constexpr uint64_t AimOffsets = 0x1B08;//����ƫ�� SDK�д���TslGame_classes.h
	 
	constexpr uint64_t AntiCheatCharacterSyncManager = 0x1020;//�����׽�ɫͬ��������

	constexpr uint64_t TimeSeconds = 0x9A4;//ʱ������
	constexpr uint64_t TimeTillExplosion = 0x7AC;//���׵���ʱ��ǡ�׵���ʱ  SDK�д���TslGame_classes.h
	constexpr uint64_t WeaponConfig_WeaponClass = 0x581;//����ǡ�׶���
	constexpr uint64_t ExplodeState = 0x5E0;//��ը״̬    //Class TslGame.*0bc6bc40d3�µ�*4ee9e0539e; 



	constexpr uint32_t MouseX = 0x4035;
	constexpr uint32_t MouseY = 0x4036;
	//constexpr uint32_t MouseX = 16253;
	//constexpr uint32_t MouseY = 16254;

	constexpr uint64_t LastFrameCameraCacheLocation =  0x9F4;//δ����
	constexpr uint64_t LastFrameCameraCacheRotation = 0x9E0;//δ����
	constexpr uint64_t LastFrameCameraCacheFOV = 0x9D8;//δ����



	

	//����Ѫ��2

	constexpr uint32_t Health = Health4;
	constexpr uint32_t Gender = 0xac0;
	constexpr uint32_t bEncryptedHealth = Health + 0x15;
	constexpr uint32_t EncryptedHealthOffset = Health + 0x14;
	constexpr uint32_t DecryptedHealthOffset = Health + 0x10;


	inline void Init()
	{

		//GameData.Offset["DecryptedHealthOffsets"] = DecryptedHealthOffsets;
		//for (size_t i = 0; i < 16; i++)
		//{
		//	GameData.Offset["DecryptedHealthOffsets" + std::to_string(i)] = DecryptedHealthOffsets[i];
		//}

		GameData.Offset["DecryptedHealthOffsets0"] = Health_keys0;
		GameData.Offset["DecryptedHealthOffsets1"] = Health_keys1;
		GameData.Offset["DecryptedHealthOffsets2"] = Health_keys2;
		GameData.Offset["DecryptedHealthOffsets3"] = Health_keys3;
		GameData.Offset["DecryptedHealthOffsets4"] = Health_keys4;
		GameData.Offset["DecryptedHealthOffsets5"] = Health_keys5;
		GameData.Offset["DecryptedHealthOffsets6"] = Health_keys6;
		GameData.Offset["DecryptedHealthOffsets7"] = Health_keys7;
		GameData.Offset["DecryptedHealthOffsets8"] = Health_keys8;
		GameData.Offset["DecryptedHealthOffsets9"] = Health_keys9;
		GameData.Offset["DecryptedHealthOffsets10"] = Health_keys10;
		GameData.Offset["DecryptedHealthOffsets11"] = Health_keys11;
		GameData.Offset["DecryptedHealthOffsets12"] = Health_keys12;
		GameData.Offset["DecryptedHealthOffsets13"] = Health_keys13;
		GameData.Offset["DecryptedHealthOffsets14"] = Health_keys14;
		GameData.Offset["DecryptedHealthOffsets15"] = Health_keys15;

		GameData.Offset["MouseX"] = MouseX;
		GameData.Offset["MouseY"] = MouseY;

		GameData.Offset["bAlwaysCreatePhysicsState"] = bAlwaysCreatePhysicsState;

		//GameData.Offset["BucksackStatus"] = BucksackStatus;
		GameData.Offset["XenuineDecrypt"] = XenuineDecrypt ;
		GameData.Offset["UWorld"] = UWorld;
		GameData.Offset["ObjID"] = ObjID;
		GameData.Offset["GNames"] = GNames;
		GameData.Offset["GNameAdd"] = GNameAdd;
		GameData.Offset["ChunkSize"] = ChunkSize;

		GameData.Offset["DecryptNameIndexRor"] = DecryptNameIndexRor;
		GameData.Offset["DecryptNameIndexXorKey1"] = DecryptOne;
		GameData.Offset["DecryptNameIndexXorKey2"] = DecryptTwo;
		GameData.Offset["DecryptNameIndexRval"] = TableOne;
		GameData.Offset["DecryptNameIndexSval"] = TableTwo;

		GameData.Offset["GameInstance"] = GameInstance;
		GameData.Offset["LocalPlayer"] = LocalPlayer;
		GameData.Offset["Actors"] = Actor;
		GameData.Offset["ComponentToWorld"] = ComponentToWorld;
		GameData.Offset["ComponentLocation"] = ComponentLocation;
		GameData.Offset["TimeSeconds"] = TimeSeconds;
		GameData.Offset["WorldToMap"] = WorldToMiniMap;
		GameData.Offset["CurrentLevel"] = CurrentLevel;
		GameData.Offset["Mesh"] = Mesh;
		GameData.Offset["CharacterMovement"] = ActorRootComp;
		GameData.Offset["LastUpdateVelocity"] = Veloctity;
		GameData.Offset["RootComponent"] = m_rootComponent;
		GameData.Offset["PlayerController"] = PlayerController;
		GameData.Offset["PlayerInput"] = PlayerInput;
		GameData.Offset["InputYawScale"] = InputYawScale;
		GameData.Offset["bShowMouseCursor"] = bShowMouseCursor;
		GameData.Offset["AcknowledgedPawn"] = AcknowledgedPawn;
		GameData.Offset["MyHUD"] = MyHUD;
		GameData.Offset["InputAxisProperties"] = InputAxisProperties;
		GameData.Offset["AntiCtCharacterSyncManager"] = AntiCheatCharacterSyncManager;
		GameData.Offset["GameState"] = GameState;
		GameData.Offset["SafetyZoneRadius"] = SafetyZoneRadius;
		GameData.Offset["SafetyZonePosition"] = SafetyZonePosition;
		GameData.Offset["BlueZoneRadius"] = PoisonGasWarningRadius;
		GameData.Offset["BlueZonePosition"] = PoisonGasWarningPosition;
		GameData.Offset["PlayerArray"] = PlayerArray;

		GameData.Offset["PlayerCameraManager"] = PlayerCameraManager;
		GameData.Offset["ViewTarget"] = ViewTarget;
		GameData.Offset["CameraCacheFOV"] = CameraFov;
		GameData.Offset["CameraCacheRotation"] = CameraRot;
		GameData.Offset["CameraCacheLocation"] = CameraPos;
		GameData.Offset["LastFrameCameraCacheFOV"] = LastFrameCameraCacheFOV;
		GameData.Offset["LastFrameCameraCacheRotation"] = LastFrameCameraCacheRotation;
		GameData.Offset["LastFrameCameraCacheLocation"] = LastFrameCameraCacheLocation;

		GameData.Offset["Gender"] = Gender;
		GameData.Offset["Health"] = Health;
		GameData.Offset["bEncryptedHealth"] = bEncryptedHealth;
		GameData.Offset["EncryptedHealthOffset"] = EncryptedHealthOffset;
		GameData.Offset["DecryptedHealthOffset"] = DecryptedHealthOffset;
		GameData.Offset["GroggyHealth"] = Health_Die;
		GameData.Offset["CharacterName"] = Playname;
		GameData.Offset["LastTeamNum"] = LastTeamNum;
		GameData.Offset["SpectatedCount"] = SpectatedCount;
		GameData.Offset["PlayerState"] = PlayerState;
		GameData.Offset["CharacterState"] = CharacterState;
		GameData.Offset["AnimScriptInstance"] = AnimScriptInstance;
		GameData.Offset["PreEvalPawnState"] = PreEvalPawnState;
		GameData.Offset["StaticMesh"] = Bone;
		GameData.Offset["Eyes"] = Eyes;
		GameData.Offset["AimOffsets"] = AimOffsets;

		GameData.Offset["PlayerStatistics"] = PlayerSatisitc;
		GameData.Offset["DamageDealtOnEnemy"] = DamageDealtOnEnemy;
		GameData.Offset["PartnerLevel"] = PartnerLevel;
		GameData.Offset["TeamNumber"] = TeamNumber;
		GameData.Offset["PlayerName"] = PlayerName;
		GameData.Offset["PlayerStatusType"] = PlayerStatusType;
		GameData.Offset["SquadMemberIndex"] = SquadMemberIndex;
		GameData.Offset["AccountId"] = AccountId;
		GameData.Offset["PubgIdData"] = PubgIdData;
		GameData.Offset["SurvivalTier"] = SurvivalTier;
		GameData.Offset["SurvivalLevel"] = SurvivalLevel;
		GameData.Offset["CharacterClanInfo"] = CharacterClanInfo;
		GameData.Offset["VehicleRiderComponent"] = VehicleRiderComponent;
		GameData.Offset["ReplicatedMovement"] = ReplicatedMovement;
		GameData.Offset["SeatIndex"] = SeatIndex;
		GameData.Offset["LastVehiclePawn"] = LastVehiclePawn;
		GameData.Offset["VehicleMovement"] = VehicleMovement;
		GameData.Offset["Wheels"] = Wheels;
		GameData.Offset["WheelLocation"] = WheelLocation;

		GameData.Offset["DampingRate"] = DampingRate;
		GameData.Offset["ShapeRadius"] = ShapeRadius;

		GameData.Offset["WidgetStateMap"] = WidgetStateMap;
		GameData.Offset["TrainingMapGrid"] = TrainingMapGrid;
		GameData.Offset["LayoutData"] = LayoutData;
		GameData.Offset["Visibility"] = Visibility;
		GameData.Offset["Slot"] = Slot;
		GameData.Offset["Offsets"] = Offsets;
		GameData.Offset["Alignment"] = Alignment;

		GameData.Offset["BlockInputWidgetList"] = BlockInputWidgetList;
		GameData.Offset["SelectMinimapSizeIndex"] = SelectMinimapSizeIndex;

		GameData.Offset["ItemID"] = ItemID;
		GameData.Offset["ItemTable"] = ItemTable;
		GameData.Offset["ItemPackageItems"] = Packge;
		GameData.Offset["DroppedItemGroup"] = DroppedItemGroup;

		GameData.Offset["DroppedItem"] = DroppedItem;
		GameData.Offset["DroppedItemGroupUItem"] = DroppedItemGroup_UItem;

		GameData.Offset["TimeTillExplosion"] = TimeTillExplosion;

		GameData.Offset["ExplodeState"] = ExplodeState;

		GameData.Offset["WeaponProcessor"] = WeaponProcessor;
		GameData.Offset["CurrentAmmoData"] = CurrentAmmoData;
		GameData.Offset["CurrentWeaponIndex"] = CurrentWeaponIndex;
		GameData.Offset["EquippedWeapons"] = EquippedWeapons;
		GameData.Offset["WeaponTrajectoryData"] = WeaponTrajectoryData;
		GameData.Offset["TrajectoryGravityZ"] = TrajectoryGravityZ;
		GameData.Offset["TrajectoryConfig"] = TrajectoryConfig;
		GameData.Offset["BallisticCurve"] = BallisticCurve;
		GameData.Offset["FloatCurves"] = FloatCurves;
		GameData.Offset["Keys"] = Keys;

		//GameData.Offset["WeaponConfig"] = WeaponConfig;
		//GameData.Offset["WeaponClass"] = WeaponClass;
		GameData.Offset["WeaponConfig_WeaponClass"] = WeaponConfig_WeaponClass;
		GameData.Offset["Mesh3P"] = Mesh3P;
		GameData.Offset["FiringAttachPoint"] = FiringAttachPoint;
		GameData.Offset["AttachedStaticComponentMap"] = AttachedStaticComponentMap;
		GameData.Offset["AttachedItems"] = AttachedItems;
		GameData.Offset["WeaponAttachmentData"] = WeaponAttachmentData;



		GameData.Offset["ScopingAttachPoint"] = ScopingAttachPoint;
		GameData.Offset["ElapsedCookingTime"] = ElapsedCookingTime;


		GameData.Offset["ControlRotation_CP"] = ControlRotation_CP;
		GameData.Offset["RecoilADSRotation_CP"] = RecoilADSRotation_CP;
		GameData.Offset["LeanLeftAlpha_CP"] = LeanLeftAlpha_CP;
		GameData.Offset["LeanRightAlpha_CP"] = LeanRightAlpha_CP;
		GameData.Offset["bIsScoping_CP"] = bIsScoping_CP;
		GameData.Offset["bIsReloading_CP"] = bIsReloading_CP;

		GameData.Offset["StaticSockets"] = StaticSockets;
		GameData.Offset["StaticSocketName"] = StaticSocketName;
		GameData.Offset["StaticRelativeLocation"] = StaticRelativeLocation;
		GameData.Offset["StaticRelativeRotation"] = StaticRelativeRotation;
		GameData.Offset["StaticRelativeScale"] = StaticRelativeScale;

		;

		//GameData.Offset["SPOOFCALL"] = SPOOFCALL;
		//GameData.Offset["LineTraceSingle"] = LineTraceSingle;
		//GameData.Offset["HOOK"] = HOOK;
		//GameData.Offset["HOOK_TWO"] = HOOK_TWO;
	}
}