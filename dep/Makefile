RACK_DIR ?= ..
.NOTPARALLEL:


# Target paths

include $(RACK_DIR)/arch.mk

nanovg = include/nanovg.h
nanosvg = include/nanosvg.h
oui-blendish = include/blendish.h
osdialog = include/osdialog.h

DEPS += $(nanovg) $(nanosvg) $(oui-blendish) $(osdialog)
include $(RACK_DIR)/dep.mk


# Targets

$(nanovg):
	cp nanovg/src/*.h include/

$(nanosvg):
	cp nanosvg/src/*.h include/

$(oui-blendish):
	cp oui-blendish/*.h include/

$(osdialog):
	cp osdialog/*.h include/

clean:
	git clean -ffdx
