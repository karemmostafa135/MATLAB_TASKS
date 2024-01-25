function varargout = calcukator_task_guide(varargin)
% CALCUKATOR_TASK_GUIDE MATLAB code for calcukator_task_guide.fig
%      CALCUKATOR_TASK_GUIDE, by itself, creates a new CALCUKATOR_TASK_GUIDE or raises the existing
%      singleton*.
%
%      H = CALCUKATOR_TASK_GUIDE returns the handle to a new CALCUKATOR_TASK_GUIDE or the handle to
%      the existing singleton*.
%
%      CALCUKATOR_TASK_GUIDE('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CALCUKATOR_TASK_GUIDE.M with the given input arguments.
%
%      CALCUKATOR_TASK_GUIDE('Property','Value',...) creates a new CALCUKATOR_TASK_GUIDE or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before calcukator_task_guide_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to calcukator_task_guide_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help calcukator_task_guide

% Last Modified by GUIDE v2.5 11-Jan-2024 12:26:09

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @calcukator_task_guide_OpeningFcn, ...
                   'gui_OutputFcn',  @calcukator_task_guide_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before calcukator_task_guide is made visible.
function calcukator_task_guide_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to calcukator_task_guide (see VARARGIN)

% Choose default command line output for calcukator_task_guide
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes calcukator_task_guide wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = calcukator_task_guide_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function screen_edit_Callback(hObject, eventdata, handles)
% hObject    handle to screen_edit (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of screen_edit as text
%        str2double(get(hObject,'String')) returns contents of screen_edit as a double


% --- Executes during object creation, after setting all properties.
function screen_edit_CreateFcn(hObject, eventdata, handles)
% hObject    handle to screen_edit (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in btn0.
function btn0_Callback(hObject, eventdata, handles)
% hObject    handle to btn0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'0');
set(handles.screen_edit,'string',screen_text);

% --- Executes on button press in btn1.
function btn1_Callback(hObject, eventdata, handles)
% hObject    handle to btn1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'1');
set(handles.screen_edit,'string',screen_text);

% --- Executes on button press in btn2.
function btn2_Callback(hObject, eventdata, handles)
% hObject    handle to btn2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'2');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn3.
function btn3_Callback(hObject, eventdata, handles)
% hObject    handle to btn3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'3');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn4.
function btn4_Callback(hObject, eventdata, handles)
% hObject    handle to btn4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'4');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn6.
function btn6_Callback(hObject, eventdata, handles)
% hObject    handle to btn6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'6');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn7.
function btn7_Callback(hObject, eventdata, handles)
% hObject    handle to btn7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'7');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn8.
function btn8_Callback(hObject, eventdata, handles)
% hObject    handle to btn8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'8');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn5.
function btn5_Callback(hObject, eventdata, handles)
% hObject    handle to btn5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'5');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn9.
function btn9_Callback(hObject, eventdata, handles)
% hObject    handle to btn9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'9');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn_clr.
function btn_clr_Callback(hObject, eventdata, handles)
% hObject    handle to btn_clr (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text=get(handles.screen_edit,'string');
set(handles.screen_edit,'string','');

% --- Executes on button press in btn_eval.
function btn_eval_Callback(hObject, eventdata, handles)
% hObject    handle to btn_eval (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = eval(screen_text);
set(handles.screen_edit,'string',screen_text);

% --- Executes on button press in btn_plus.
function btn_plus_Callback(hObject, eventdata, handles)
% hObject    handle to btn_plus (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'+');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn_minus.
function btn_minus_Callback(hObject, eventdata, handles)
% hObject    handle to btn_minus (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'-');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn_mult.
function btn_mult_Callback(hObject, eventdata, handles)
% hObject    handle to btn_mult (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'*');
set(handles.screen_edit,'string',screen_text);


% --- Executes on button press in btn_div.
function btn_div_Callback(hObject, eventdata, handles)
% hObject    handle to btn_div (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
screen_text = get(handles.screen_edit,'string');
screen_text = strcat(screen_text,'/');
set(handles.screen_edit,'string',screen_text);
