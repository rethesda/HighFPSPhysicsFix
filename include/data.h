#pragma once

namespace HFPF
{
	namespace AID
	{
constexpr REL::ID FPS_Cap_Patch1                                              (2228907); // Fallout4.exe+0x00C2B0B0
constexpr REL::ID FullScreen_Patch1                                           (2227231); // Fallout4.exe+0x00BB1C40
constexpr REL::ID MovRaxRcx                                                   (2276824); // Fallout4.exe+0x01812310
constexpr REL::ID ResizeTarget                                                (2276825); // Fallout4.exe+0x018126C0
constexpr REL::ID CreateDXGIFactory                                           (4492363); // Fallout4.exe+0x0181F290
constexpr REL::ID FrameTimer                                                  (4803789); // Fallout4.exe+0x0325ED40
constexpr REL::ID CreateWindowEx_a                                            (2276814); // Fallout4.exe+0x018109D0
constexpr REL::ID BlackLoadingScreens                                         (2249217); // Fallout4.exe+0x01061C10
constexpr REL::ID LoadingScreens                                              (2227631); // Fallout4.exe+0x00BD2530
constexpr REL::ID PostLoadInject                                              (2248711); // Fallout4.exe+0x01040A60
constexpr REL::ID LoadScreenPlusLimiterInject                                 (2276834); // Fallout4.exe+0x01812EA0
constexpr REL::ID Untie                                                       (2267969); // Fallout4.exe+0x01656750
constexpr REL::ID ExtInt                                                      (359440);  // Fallout4.exe+0x02F18520
constexpr REL::ID FixStuttering1 											  (2277709); // Fallout4.exe+0x0186EBC0
constexpr REL::ID FixStuttering2                                              (2277710); // Fallout4.exe+0x0186EDA0
constexpr REL::ID ObjectsTransfer                                             (2255886); // Fallout4.exe+0x01271920
constexpr REL::ID FixWhiteScreen                                              (2258401); // Fallout4.exe+0x013AC2D0
constexpr REL::ID FixWindSpeed1                                               (2278751); // Fallout4.exe+0x018B9420
constexpr REL::ID FixWindSpeed2                                               (2277711); // Fallout4.exe+0x0186FAA0
constexpr REL::ID FixRotationSpeed                                            (2234879); // Fallout4.exe+0x00DDA9D0
constexpr REL::ID FixLockpickRotation                                         (2249260); // Fallout4.exe+0x01066710
constexpr REL::ID FixWSRotationSpeed                                          (2195211); // Fallout4.exe+0x0039EE30
constexpr REL::ID FixRepeateRate                                              (2249218); // Fallout4.exe+0x01061DD0
constexpr REL::ID FixLeftTriggerZoomSpeed                                     (2249220); // Fallout4.exe+0x010624F0
constexpr REL::ID FixLoadScreenRotationSpeed                                  (2249233); // Fallout4.exe+0x01063A60
constexpr REL::ID FixStuckAnim                                                (2302542); // Fallout4.exe+0x01E75730
constexpr REL::ID FixMotionFeedback                                           (2196089); // Fallout4.exe+0x003E3B40
constexpr REL::ID FixSittingRotationX                                         (2248271); // Fallout4.exe+0x0101CC70
constexpr REL::ID Upscale                                                     (2276833); // Fallout4.exe+0x01812C50
constexpr REL::ID ActorFade                                                   (2214659); // Fallout4.exe+0x0081A030
constexpr REL::ID PlayerFade                                                  (2248393); // Fallout4.exe+0x01024280
constexpr REL::ID BudgetGame                                                  (2251303); // Fallout4.exe+0x010E4FC0
constexpr REL::ID BudgetUI                                                    (2251305); // Fallout4.exe+0x010E5250
constexpr REL::ID Budget                                                      (2251306); // Fallout4.exe+0x010E5360
constexpr REL::ID Write_iLocationX                                            (5988687); // Fallout4.exe+0x00C3571F

	}

	namespace Offsets
	{
        static inline constexpr std::uintptr_t FPS_Cap_Patch1                                               = 0xC37; // Fallout4.exe+0x00C2BCE7
        static inline constexpr std::uintptr_t FPS_Cap_Patch2                                               = 0xC40; // Fallout4.exe+0x00C2BCF0
        static inline constexpr std::uintptr_t Borderless_Patch                                             = 0xBEE; // Fallout4.exe+0x00C2BC9E
        static inline constexpr std::uintptr_t FullScreen_Patch1                                            = 0xCF; // Fallout4.exe+0x00BB1D0F
        static inline constexpr std::uintptr_t FullScreen_Patch3                                            = 0x100; // Fallout4.exe+0x00BB1D40
        static inline constexpr std::uintptr_t Screen_Patch                                                 = 0xBE4; // Fallout4.exe+0x00C2BC94
        static inline constexpr std::uintptr_t MovRaxRcx                                                    = 0x1D6; // Fallout4.exe+0x018124E6
        static inline constexpr std::uintptr_t ResizeBuffersDisable                                         = 0x28; // Fallout4.exe+0x01812338
        static inline constexpr std::uintptr_t ResizeTarget                                                 = 0x108; // Fallout4.exe+0x018127C8
        static inline constexpr std::uintptr_t ResizeTargetDisable                                          = 0x27; // Fallout4.exe+0x018126E7
        static inline constexpr std::uintptr_t ResizeBuffers                                                = 0x1C1; // Fallout4.exe+0x018124D1
        static inline constexpr std::uintptr_t CreateDXGIFactory                                            = 0x32; // Fallout4.exe+0x0181F2C2
        static inline constexpr std::uintptr_t D3D11CreateDeviceAndSwapChain                                = 0x410; // Fallout4.exe+0x0181F6A0
        static inline constexpr std::uintptr_t CreateWindowEx_a                                             = 0x285; // Fallout4.exe+0x01810C55
        static inline constexpr std::uintptr_t BlackLoadingScreens                                          = 0x116; // Fallout4.exe+0x01061D26
        static inline constexpr std::uintptr_t LoadingScreens                                               = 0x223; // Fallout4.exe+0x00BD2753
        static inline constexpr std::uintptr_t PostLoadInject                                               = 0x2E; // Fallout4.exe+0x01040A8E
        static inline constexpr std::uintptr_t BethesdaVsync                                                = 0x331; // Fallout4.exe+0x0181F5C1
        static inline constexpr std::uintptr_t LoadScreenPlusLimiterInject                                  = 0xE; // Fallout4.exe+0x01812EAE
        static inline constexpr std::uintptr_t PresentInject                                                = 0x48; // Fallout4.exe+0x01812EE8
        static inline constexpr std::uintptr_t Untie                                                        = 0x61; // Fallout4.exe+0x016567B1
        static inline constexpr std::uintptr_t FixStuttering1                                               = 0x169; // Fallout4.exe+0x0186ED29
        static inline constexpr std::uintptr_t FixStuttering2                                               = 0x19B; // Fallout4.exe+0x0186EF3B
        static inline constexpr std::uintptr_t FixStuttering3                                               = 0x122; // Fallout4.exe+0x0186ECE2
        static inline constexpr std::uintptr_t FixWhiteScreen                                               = 0x10; // Fallout4.exe+0x013AC2E0
        static inline constexpr std::uintptr_t FixWindSpeed1                                                = 0x24; // Fallout4.exe+0x018B9444
        static inline constexpr std::uintptr_t FixWindSpeed2                                                = 0x115; // Fallout4.exe+0x0186FBB5
        static inline constexpr std::uintptr_t FixWindSpeed3                                                = 0x1B7; // Fallout4.exe+0x0186FC57
        static inline constexpr std::uintptr_t FixWindSpeed4                                                = 0x3BD; // Fallout4.exe+0x0186FE5D
        static inline constexpr std::uintptr_t FixRotationSpeed                                             = 0x6E; // Fallout4.exe+0x00DDAA3E
        static inline constexpr std::uintptr_t FixLockpickRotation                                          = 0x42; // Fallout4.exe+0x01066752
        static inline constexpr std::uintptr_t FixWSRotationSpeed                                           = 0x94; // Fallout4.exe+0x0039EEC4
        static inline constexpr std::uintptr_t FixRepeateRate                                               = 0x3F5; // Fallout4.exe+0x010621C5
        static inline constexpr std::uintptr_t FixLeftTriggerZoomSpeed                                      = 0xDD; // Fallout4.exe+0x010625CD
        static inline constexpr std::uintptr_t FixRightTriggerZoomSpeed                                     = 0x11E; // Fallout4.exe+0x0106260E
        static inline constexpr std::uintptr_t FixLoadScreenRotationSpeedUp                                 = 0x525; // Fallout4.exe+0x010622F5
        static inline constexpr std::uintptr_t FixLoadScreenRotationSpeedDown                               = 0x58A; // Fallout4.exe+0x0106235A
        static inline constexpr std::uintptr_t FixLoadScreenRotationSpeedLeft                               = 0x5EE; // Fallout4.exe+0x010623BE
        static inline constexpr std::uintptr_t FixLoadScreenRotationSpeedRight                              = 0x65E; // Fallout4.exe+0x0106242E
        static inline constexpr std::uintptr_t FixLoadScreenRotationSpeed                                   = 0xBA; // Fallout4.exe+0x01063B1A
        static inline constexpr std::uintptr_t FixStuckAnim                                                 = 0xA9; // Fallout4.exe+0x01E757D9
        static inline constexpr std::uintptr_t FixMotionFeedback                                            = 0x9FE; // Fallout4.exe+0x003E453E
        static inline constexpr std::uintptr_t FixSittingRotationX                                          = 0xC0; // Fallout4.exe+0x0101CD30
        static inline constexpr std::uintptr_t FixSittingRotationY                                          = 0xDE; // Fallout4.exe+0x0101CD4E
        static inline constexpr std::uintptr_t Upscale                                                      = 0x1BA; // Fallout4.exe+0x01812E0A
        static inline constexpr std::uintptr_t ActorFade                                                    = 0xAED; // Fallout4.exe+0x0081AB1D
        static inline constexpr std::uintptr_t PlayerFade                                                   = 0x169; // Fallout4.exe+0x010243E9
        static inline constexpr std::uintptr_t iSizeW                                                       = 0xBF8; // Fallout4.exe+0x00C2BCA8
        static inline constexpr std::uintptr_t iSizeH                                                       = 0xC02; // Fallout4.exe+0x00C2BCB2
        static inline constexpr std::uintptr_t BudgetGame                                                   = 0x3C; // Fallout4.exe+0x010E4FFC
        static inline constexpr std::uintptr_t BudgetUI                                                     = 0xB4; // Fallout4.exe+0x010E5304
        static inline constexpr std::uintptr_t Budget                                                       = 0xB4; // Fallout4.exe+0x010E5414
        static inline constexpr std::uintptr_t LoadPluginINI_C                                              = 0x631; // Fallout4.exe+0x00C2B6E1
        static inline constexpr std::uintptr_t Write_iLocationX                                             = 0x269; // Fallout4.exe+0x00C358F9
        static inline constexpr std::uintptr_t Write_iLocationY                                             = 0x2A4; // Fallout4.exe+0x00C35934 
	}

	namespace Payloads
	{
		static inline constexpr std::uint8_t JMP8 = { 0xEB };
		static inline constexpr std::uint8_t INT3 = { 0xCC };
		static inline constexpr std::uint8_t NOP = { 0x90 };
		static inline constexpr std::uint8_t NOP2[] = { 0x66, 0x90 };
		static inline constexpr std::uint8_t NOP3[] = { 0x0F, 0x1F, 0x00 };
		static inline constexpr std::uint8_t NOP4[] = { 0x0F, 0x1F, 0x40, 0x00 };
		static inline constexpr std::uint8_t NOP5[] = { 0x0F, 0x1F, 0x44, 0x00, 0x00 };
		static inline constexpr std::uint8_t NOP6[] = { 0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00 };
		static inline constexpr std::uint8_t NOP8[] = { 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 };

		static inline constexpr std::uint8_t screen_patch[] = { 0xB8, 0x01, 0x00, 0x00, 0x00, 0x90, 0x90 };
		static inline constexpr std::uint8_t fullscreen1_patch[] = { 0x41, 0x80, 0xFB, 0x01, 0x90, 0x90, 0x90 };
		static inline constexpr std::uint8_t fullscreenJMP_patch[] = { 0xEB, 0x18 };
		static inline constexpr std::uint8_t fullscreenNOP_patch[] = { 0x90, 0x90 };
		static inline constexpr std::uint8_t untie_patch[] = { 0x00 };
		static inline constexpr std::uint8_t ifpsclamp_patch[] = { 0x38 };
		static inline constexpr std::uint8_t disable_blackloading_patch[] = { 0xEB };
		static inline constexpr std::uint8_t ResizeBuffersDisable[] = { 0xE9, 0x6A, 0x03, 0x00, 0x00, 0x90 };
		static inline constexpr std::uint8_t ResizeTargetDisable[] = { 0xE9, 0x3C, 0x01, 0x00, 0x00, 0x90 };
		static inline constexpr std::uint8_t res_patch[] = { 0xB8, 0x00, 0x00, 0x00, 0x00, 0x90 };

		static inline constexpr std::uint8_t SkipNoINI[] = { 0x48, 0x8B, 0xCF };

		static inline constexpr std::uint8_t player_fade_jmp[] = { 0xEB, 0x6C, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	}
}
