NDKROOT := /Applications/adt-bundle-mac-x86_64-20131030/android-ndk-r9c
LOCAL_PATH := $(call my-dir)
PROJECT_ROOT_PATH := $(LOCAL_PATH)/../../../
CORE_FRAMEWORK_RELATIVE_PATH := ../../../core/framework/
CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH := ../../../core/framework/opengles/
CORE_FRAMEWORK_UI_RELATIVE_PATH := ../../../core/framework/ui/
CORE_GAME_RELATIVE_PATH := ../../../core/game/
CORE_GAME_OPENGLES_RELATIVE_PATH := ../../../core/game/opengles/
CORE_GAME_UI_RELATIVE_PATH := ../../../core/game/ui/

include $(CLEAR_VARS)

LOCAL_MODULE    := game
LOCAL_CFLAGS    := -Wall -Wextra -DTECHNE_GAMES_OPENGL_ES -DTECHNE_GAMES_OPENGL_ANDROID -DGL_GLEXT_PROTOTYPES=1

LOCAL_SRC_FILES := platform_asset_utils.c
LOCAL_SRC_FILES += renderer_wrapper.cpp

LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/Circle.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/DynamicGameObject.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/DynamicGridGameObject.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/GameObject.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/GridGameObject.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/Line.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/OverlapTester.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/Rectangle.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/Triangle.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_RELATIVE_PATH)/Vector2D.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/asset_utils.c
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/image.c
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/OpenGLESCircleBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/OpenGLESLineBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/OpenGLESManager.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/OpenGLESProgram.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/OpenGLESRectangleBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/OpenGLESSpriteBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/platform_file_utils.c
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/shader.c
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_OPENGLES_RELATIVE_PATH)/texture.c
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/CircleBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/Font.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/LineBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/RectangleBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/SpriteBatcher.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/TextureRegion.cpp
LOCAL_SRC_FILES += $(CORE_FRAMEWORK_UI_RELATIVE_PATH)/TouchEvent.cpp

LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/Assets.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/GameButton.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/GameListener.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/GameScreen.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/Glove.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/Obstacle.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/PlaneDynamicGameObject.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/PuffCloud.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/Renderer.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/SpikeGameObject.cpp
LOCAL_SRC_FILES += $(CORE_GAME_RELATIVE_PATH)/World.cpp
LOCAL_SRC_FILES += $(CORE_GAME_OPENGLES_RELATIVE_PATH)/game.cpp
LOCAL_SRC_FILES += $(CORE_GAME_OPENGLES_RELATIVE_PATH)/OpenGLESGameScreen.cpp
LOCAL_SRC_FILES += $(CORE_GAME_OPENGLES_RELATIVE_PATH)/OpenGLESRenderer.cpp

LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/core/framework/
LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/core/framework/ui/
LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/core/framework/opengles/
LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/core/game/
LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/core/game/ui/
LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/core/game/opengles/
LOCAL_C_INCLUDES += $(PROJECT_ROOT_PATH)/3rdparty/
LOCAL_STATIC_LIBRARIES := libpng
LOCAL_LDLIBS := -lGLESv2 -landroid

include $(BUILD_SHARED_LIBRARY)

$(call import-add-path, $(PROJECT_ROOT_PATH)/3rdparty)
$(call import-module, libpng)