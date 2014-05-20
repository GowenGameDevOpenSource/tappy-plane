//
//  Assets.h
//  tappyplane
//
//  Created by Stephen Gowen on 2/1/14.
//  Copyright (c) 2014 Techne Games. All rights reserved.
//

#ifndef __tappyplane__Assets__
#define __tappyplane__Assets__

// Texture Definitions
#define GAME_TEXTURE_WIDTH 1024
#define GAME_TEXTURE_HEIGHT 1024
#define BACKGROUND_TEXTURE_WIDTH 1024
#define BACKGROUND_TEXTURE_HEIGHT 1024

// Texture Region Definitions
#define BACKGROUND_TEXTURE_REGION_X 0
#define BACKGROUND_TEXTURE_REGION_Y 0
#define BACKGROUND_TEXTURE_REGION_WIDTH 270
#define BACKGROUND_TEXTURE_REGION_HEIGHT 480

#define TITLE_TEXTURE_REGION_X 0
#define TITLE_TEXTURE_REGION_Y 504
#define TITLE_TEXTURE_REGION_WIDTH 224
#define TITLE_TEXTURE_REGION_HEIGHT 152

#define GLOVE_FRAME_1_TEXTURE_REGION_X 376
#define GLOVE_FRAME_1_TEXTURE_REGION_Y 516
#define GLOVE_FRAME_1_TEXTURE_REGION_WIDTH 64
#define GLOVE_FRAME_1_TEXTURE_REGION_HEIGHT 64

#define GLOVE_FRAME_2_TEXTURE_REGION_X 440
#define GLOVE_FRAME_2_TEXTURE_REGION_Y 516
#define GLOVE_FRAME_2_TEXTURE_REGION_WIDTH 64
#define GLOVE_FRAME_2_TEXTURE_REGION_HEIGHT 64

#define TAP_LEFT_TEXTURE_REGION_X 376
#define TAP_LEFT_TEXTURE_REGION_Y 596
#define TAP_LEFT_TEXTURE_REGION_WIDTH 88
#define TAP_LEFT_TEXTURE_REGION_HEIGHT 44

#define TAP_RIGHT_TEXTURE_REGION_X 472
#define TAP_RIGHT_TEXTURE_REGION_Y 596
#define TAP_RIGHT_TEXTURE_REGION_WIDTH 88
#define TAP_RIGHT_TEXTURE_REGION_HEIGHT 44

#define FOREGROUND_LEFT_TEXTURE_REGION_X 2
#define FOREGROUND_GRASS_LEFT_TEXTURE_REGION_Y 712
#define FOREGROUND_ROCK_LEFT_TEXTURE_REGION_Y 792
#define FOREGROUND_SNOW_LEFT_TEXTURE_REGION_Y 872
#define FOREGROUND_ICE_LEFT_TEXTURE_REGION_Y 952
#define FOREGROUND_LEFT_TEXTURE_REGION_WIDTH 404
#define FOREGROUND_LEFT_TEXTURE_REGION_HEIGHT 72

#define FOREGROUND_RIGHT_TEXTURE_REGION_X 406
#define FOREGROUND_GRASS_RIGHT_TEXTURE_REGION_Y 712
#define FOREGROUND_ROCK_RIGHT_TEXTURE_REGION_Y 792
#define FOREGROUND_SNOW_RIGHT_TEXTURE_REGION_Y 872
#define FOREGROUND_ICE_RIGHT_TEXTURE_REGION_Y 952
#define FOREGROUND_RIGHT_TEXTURE_REGION_WIDTH 404
#define FOREGROUND_RIGHT_TEXTURE_REGION_HEIGHT 72

#define SPIKE_TEXTURE_REGION_X 912
#define SPIKE_GRASS_TEXTURE_REGION_Y 0
#define SPIKE_ROCK_TEXTURE_REGION_Y 248
#define SPIKE_SNOW_TEXTURE_REGION_Y 496
#define SPIKE_ICE_TEXTURE_REGION_Y 744
#define SPIKE_TEXTURE_REGION_WIDTH 108
#define SPIKE_TEXTURE_REGION_HEIGHT 240

#define PLANE_BLUE_FRAME_1_TEXTURE_REGION_X 0
#define PLANE_BLUE_FRAME_1_TEXTURE_REGION_Y 4
#define PLANE_BLUE_FRAME_2_TEXTURE_REGION_X 96
#define PLANE_BLUE_FRAME_2_TEXTURE_REGION_Y 4
#define PLANE_BLUE_FRAME_3_TEXTURE_REGION_X 192
#define PLANE_BLUE_FRAME_3_TEXTURE_REGION_Y 4

#define PLANE_GREEN_FRAME_1_TEXTURE_REGION_X 288
#define PLANE_GREEN_FRAME_1_TEXTURE_REGION_Y 4
#define PLANE_GREEN_FRAME_2_TEXTURE_REGION_X 384
#define PLANE_GREEN_FRAME_2_TEXTURE_REGION_Y 4
#define PLANE_GREEN_FRAME_3_TEXTURE_REGION_X 480
#define PLANE_GREEN_FRAME_3_TEXTURE_REGION_Y 4

#define PLANE_RED_FRAME_1_TEXTURE_REGION_X 576
#define PLANE_RED_FRAME_1_TEXTURE_REGION_Y 4
#define PLANE_RED_FRAME_2_TEXTURE_REGION_X 672
#define PLANE_RED_FRAME_2_TEXTURE_REGION_Y 4
#define PLANE_RED_FRAME_3_TEXTURE_REGION_X 768
#define PLANE_RED_FRAME_3_TEXTURE_REGION_Y 4

#define PLANE_YELLOW_FRAME_1_TEXTURE_REGION_X 0
#define PLANE_YELLOW_FRAME_1_TEXTURE_REGION_Y 82
#define PLANE_YELLOW_FRAME_2_TEXTURE_REGION_X 96
#define PLANE_YELLOW_FRAME_2_TEXTURE_REGION_Y 82
#define PLANE_YELLOW_FRAME_3_TEXTURE_REGION_X 192
#define PLANE_YELLOW_FRAME_3_TEXTURE_REGION_Y 82

#define PLANE_TEXTURE_REGION_WIDTH 90
#define PLANE_TEXTURE_REGION_HEIGHT 74

#define PUFF_LARGE_TEXTURE_REGION_X 288
#define PUFF_LARGE_TEXTURE_REGION_Y 84
#define PUFF_LARGE_TEXTURE_REGION_WIDTH 48
#define PUFF_LARGE_TEXTURE_REGION_HEIGHT 36

#define GAME_OVER_TEXTURE_REGION_X 272
#define GAME_OVER_TEXTURE_REGION_Y 324
#define GAME_OVER_TEXTURE_REGION_WIDTH 412
#define GAME_OVER_TEXTURE_REGION_HEIGHT 80

#define DIALOG_TEXTURE_REGION_X 0
#define DIALOG_TEXTURE_REGION_Y 244
#define DIALOG_TEXTURE_REGION_WIDTH 264
#define DIALOG_TEXTURE_REGION_HEIGHT 204

#define OK_BUTTON_TEXTURE_REGION_X 480
#define OK_BUTTON_TEXTURE_REGION_Y 428
#define OK_BUTTON_TEXTURE_REGION_WIDTH 136
#define OK_BUTTON_TEXTURE_REGION_HEIGHT 80

#define LEADERBOARDS_BUTTON_TEXTURE_REGION_X 272
#define LEADERBOARDS_BUTTON_TEXTURE_REGION_Y 428
#define LEADERBOARDS_BUTTON_TEXTURE_REGION_WIDTH 196
#define LEADERBOARDS_BUTTON_TEXTURE_REGION_HEIGHT 72

#define MEDAL_BRONZE_TEXTURE_REGION_X 0
#define MEDAL_SILVER_TEXTURE_REGION_X 120
#define MEDAL_GOLD_TEXTURE_REGION_X 240
#define MEDAL_TEXTURE_REGION_Y 516
#define MEDAL_TEXTURE_REGION_WIDTH 116
#define MEDAL_TEXTURE_REGION_HEIGHT 124

// Font Definition
#define FONT_TEXTURE_REGION_X 0
#define FONT_TEXTURE_REGION_Y 4
#define FONT_GLYPHS_PER_ROW 16
#define FONT_GLYPH_WIDTH 56
#define FONT_GLYPH_HEIGHT 78

// Sound Definitions
#define ASCEND_SOUND 1
#define SCORE_SOUND 2
#define HIT_SOUND 3
#define LAND_SOUND 4

#include <vector>
#include "EnvironmentType.h"

class TextureRegion;
class PlaneDynamicGameObject;
class Glove;

class Assets
{
public:
	static Assets * getInstance();
    
    static TextureRegion getWorldBackgroundTextureRegion();
    
    static TextureRegion getTitleTextureRegion();
    
    static TextureRegion getGloveTextureRegion(Glove &glove);
    
    static TextureRegion getTapLeftTextureRegion();
    
    static TextureRegion getTapRightTextureRegion();
    
    static TextureRegion getWorldForegroundLeftTextureRegion(Environment_Type type);
    
    static TextureRegion getWorldForegroundRightTextureRegion(Environment_Type type);
    
    static TextureRegion getWorldSpikeTextureRegion(Environment_Type type);
    
    static TextureRegion getPlaneTextureRegion(PlaneDynamicGameObject &plane);
    
    static TextureRegion getPuffLargeTextureRegion();
    
    static TextureRegion getDialogTextureRegion();
    
    static TextureRegion getGameOverTextureRegion();
    
    static TextureRegion getOkButtonTextureRegion();
    
    static TextureRegion getLeaderboardsButtonTextureRegion();
    
    static TextureRegion getBronzeMedalTextureRegion();
    
    static TextureRegion getSilverMedalTextureRegion();
    
    static TextureRegion getGoldMedalTextureRegion();
    
    short getCurrentSoundId();
    
    void setCurrentSoundId(short soundId);
    
    void resetCurrentSoundId();

private:
    Assets();
    
    static int getKeyFrameNumber(float stateTime, float cycleTime, std::vector<float> &frameDurations);
    
    short m_sCurrentSoundId;
};

#endif /* defined(__tappyplane__Assets__) */